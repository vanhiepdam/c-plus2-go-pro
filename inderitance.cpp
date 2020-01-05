/*
khái niệm:
    kế thừa tính chất và đặc điểm
*/
#include <iostream>

using namespace std;

class Base {
    public:
        int strength;
        int agility;
        int intelligent;
        int dexterity;
        int combat_speed;
        int movement_speed;
        int resistance;
        int spell_power;
        int mana;
};

class Warrior: public Base {
};

class Archer: public Base {
};

class Thief: public Base {
};

class Mage: public Base {
};

class Warlock: public Base {
};

class Paladin: public Base {
};
// tất cả class trên ngoài class Base đều thừa hưởng tính chất và đặc điểm của class Base.
// 1 ví dụ về sự dụng inheritance để thay cho việc copy/paste code, và sử dụng inheritance cũng tránh việc loạn code và dễ kiểm soát code hơn.

