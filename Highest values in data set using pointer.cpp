#include <iostream>
#include <vector>

using namespace std;
// Exercise detail:
// Write a C++ program to find the max of an integral data set. The program will ask the user to input the
// number of data values in the set and each value. The program prints on screen a pointer that points to
// the max value.

int main() {
    int ini_v_size;
    cout << "Enter number of values: ";
    cin  >> ini_v_size;
    cout << "Enter values: ";
    vector<int> data(ini_v_size);
    int* Vptr;
    for(int c = 0; c < data.size(); c++) {
        cin >> data.at(c);
        if(c == 0) {
            Vptr = &data.at(c);
        } else if(data.at(c) > *Vptr) {
            Vptr = &data.at(c);
        }
    }
    cout << "Highest value in the value set is: " << *Vptr << endl;
}
