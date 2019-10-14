#include <iostream>

using namespace std;

int main() {
    cout << "This program calculate the sum of list of integer numbers\nNote that the length of list is less than or equal 100\nType *;* to get the sum\n";
    int cinNumber, sum = 0;
    int loop = 1;
    string getsum;
    while(loop <= 100) {
        cin >> cinNumber, getsum;
        if(getsum == ";") break;
        sum += cinNumber;
        loop++;
    }
    cout << "Sum: " << sum;
}
