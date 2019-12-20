#include <iostream>

using namespace std;
// Exercise detail:
// Given the string "A string." Print on one line the letter on the index 0
// the pointer position and the letter t. undate the pointer to pointer +2
// Then, in another line print the pointer and the letters r and g of the string (using the pointer).

int main() {
    string a_string = "A string";
    char* Sptr = &a_string.at(0);
    cout << *Sptr << " 0 ";
    Sptr = &a_string.at(3);
    cout << *Sptr << endl;
    Sptr += 2;
    cout << *Sptr;
    Sptr -= 1;
    cout << " " << *Sptr;
    Sptr = &a_string.back();
    cout << " " << *Sptr;
}
