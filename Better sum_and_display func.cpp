#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int sum_and_display(const vector<int>& list) {
    int s = 0, size = list.size();
    // Add up the values in the list
        int i = 0;
    while (i < size) {
    s += list[i];
    i++;
    }
    // Print the contents of the list
    // int i = 0; // Illegal, variable i already defined above
    while (i < size) {
        cout << setw(5) << list[i] << '\n';
        i++;
    }
    cout << "--------\n";
    cout << setw(5) << s << '\n';
}

int better_sum_and_display(const vector<int>& list) {
    int sum = 0;
    for(int c = 0; c < list.size(); c++) {
        sum += list.at(c);
    }
    cout << "--------\n";
    cout << setw(5) << sum << endl;
}

int main() {
    vector<int> abc{9, 10, 3, 5, 2, 8};
    sum_and_display(abc);
    better_sum_and_display(abc);
}
