#include <iostream>

using namespace std;
// Exercise detail
// Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b'
// respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to
// ptrA and ptrB respectively, and display them.
int main() {
    int a,b;
    int* ptrA = &a;
    int* ptrB = &b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << "Inputs: " << *ptrA << " " << *ptrB << endl;
}
