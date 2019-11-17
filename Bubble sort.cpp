#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
void bubbleSort(int SIZE) {
    if(arr.size() == 1) {
        return ;
    }
    if(SIZE == 0) {
        return ;
    }
    else {
        for(int count = 1; count < arr.size(); count++){
            if(arr.at(count) < arr.at(count - 1)) {
                int temp;
                temp = arr.at(count);
                arr.at(count) = arr.at(count - 1);
                arr.at(count - 1) = temp;
            }
        }
        bubbleSort(SIZE - 1);
    }
    return;
}

int main() {
    int arr_size;
    cout << "Input array size: ";
    cin >> arr_size;
    cout << "Input array: ";
    int x;
    for(int count = 0; count < arr_size; count++) {
        cin >> x;
        arr.push_back(x);
    }
    bubbleSort(arr_size);
    cout << "Sorted array: ";
    for(int count = 0; count < arr_size; count++) {
        cout << arr.at(count) << " ";
    }
    return 0;
}
