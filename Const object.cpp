#include <iostream>

using namespace std;

class Test {
    private:
        string test = "test.";
    public:
        string get_test() const {
            return this->test;
        }
};

int main() {
    const Test test;
    cout << test.get_test();
}
