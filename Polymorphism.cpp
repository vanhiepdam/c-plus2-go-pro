//khái niệm: polymorphism có nghĩa là nhiều dạng.
#include <iostream>
#include <string>

using namespace std;
// ví dụ 1: printer print nhiều dạng giá trị.
class Print {
    public:
        void print(int c) {
            cout << c << endl;
        }
        void print(double c) {
            cout << c << endl;
        }
        void print(string c) {
            cout << c << endl;
        }
};
// ví dụ 2: kế thừa cout nhưng cout của class con có content khác với cout của class cha
class Yasuo {
    public:
        virtual void speak() { // virtual ở đây là để sau đó các class con có thể override function này
            cout << "Death is like the wind. Always by my side.";
        }
};
class Rengar: public Yasuo {
    public:
        void speak() {
            cout << "Nothing will escape.";
        }
};

int main() {
    Print test;
    test.print("test.");
    test.print(24);
    test.print(3.2);

    Yasuo* cptr;
    Rengar rengar;
    cptr = &rengar;
    cptr->speak(); // cái này được gọi là runtime polymorphism
}
