#include <iostream>

using namespace std;

class quote {
    public:
        void speak() {
            cout << "command me, master." << endl;
        }
};

class undead: public quote {
    public:
        void speak() {
            cout << "i serve only the frozen throne." << endl;
        }
};

class orc: public quote {
    public:
        void speak() {
            cout << "for the horde!" << endl;
        }
};

class human: public quote {
    public:
        void speak() {
            cout << "for the alliance!" << endl;
        }
};

int main() {
    undead KelThuzad;
    orc Thrall;
    human Anduin;
    KelThuzad.speak();
    Thrall.speak();
    Anduin.speak();
}
