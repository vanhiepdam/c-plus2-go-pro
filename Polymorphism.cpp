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


// 1. Cách đặt tên class - style: CamelCase - VD: (Person, HumunResource)
// 2. Đây không phải là polymorphism, đây chỉ là inheritance
// 3. Với mỗi bài, nêu khái niệm bằng tiếng việt trong phần comment ở đầu file rồi mới thực hành
// 4. Ví dụ cần cụ thể và rõ ràng hơn
