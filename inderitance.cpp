#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class add {
	protected:
        int numbers;
	public:
        add(int a = 0) {
            numbers = a;
        }
        void another_one() {
            numbers++;
        }
        int get_numbers() {
            return numbers;
        }
};

class add_2: public add {
    public:
        add_2(int a = 0) {
            numbers = a;
        }
        void and_another_one() {
            numbers++;
        }
};

int main() {
	add_2 idk(10);
	idk.another_one();
	idk.and_another_one();
	cout << idk.get_numbers();
}
