// Khái niệm ở đây
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


// 1. Cách đặt tên class - style: CamelCase - VD: (Person, HumunResource)
// 2. Đây không phải là abstraction
// 3. Với mỗi bài, nêu khái niệm bằng tiếng việt trong phần comment ở đầu file rồi mới thực hành
// 4. Ví dụ cần cụ thể và rõ ràng hơn
