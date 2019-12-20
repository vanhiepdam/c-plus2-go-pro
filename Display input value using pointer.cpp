#include <iostream>

using namespace std;
// Exercise detail:
// Take input in variable and display same value by pointer.

int main() {
    int input;
    int* Iptr = &input;
    cout << "Enter a number: ";
    cin >> input;
    cout << "Your input is: " << *Iptr;
}
