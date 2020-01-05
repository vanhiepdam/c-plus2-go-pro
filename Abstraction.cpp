/*
khái niệm:
    chỉ cho ra những dữ liệu cần thiết và che giấu đi các chi tiết bên trong
*/
#include <iostream>

using namespace std;

class abc {
    private:
        int a;
        int b;
        int c;
    public:
        abc(int ia, int ib, int ic) {
            this->a = ia;
            this->b = ib;
            this->c = ic;
        }
        int get_sum() {
            return this->a + this->b + this->c;
        }
        int get_highest_stored_data() {
            if(this->a > this->b && this->a > this->c) {
                return this->a;
            } else if(this->b > this->a && this->b > this->c) {
                return this->b;
            } else if(this->c > this->a && this->c > this->b) {
                return this->c;
            } else return -189345;
        }
};

int main() {
    abc obj1(3, 5, 2);
    cout << "sum > " << obj1.get_sum() << endl; // <== người dùng không biết giá trị đơn thuần của a,b và c là gì và chương trình chỉ cho người dùng biết giá trị tổng của obj1 thôi.
    if(obj1.get_highest_stored_data() == -189345) {
        cout << "there are no highest stored data" << endl;
    } else {
        cout << "highest > " << obj1.get_highest_stored_data(); // <== trong trường hợp này cũng thế, method này chỉ cho người dùng thấy số to nhất trong các biến a, b, c nhưng người dùng không biết được chi tiết a, b, c có giá trị đơn thuần là ntn.
    }
}
// chốt: abstraction là chỉ cho ra những phần cần thiết phà che đi các chi tiết bên trong khi không cần thiết.
