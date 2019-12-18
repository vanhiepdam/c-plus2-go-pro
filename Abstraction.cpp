#include <iostream>

using namespace std;

class mystery {
    private:
        string box = "chuc ban may man lan sau";
    public:
        string whats_in_the_box() {
            return box;
        }
};

int main() {
    mystery mystery_box;
    cout << mystery_box.whats_in_the_box() << endl;
}
