#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr,int SIZE) {
    if(arr.size() == 1) {
        return arr;
    }
    if(SIZE = 0) {
        return arr;
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
        bubbleSort(arr, SIZE - 1);
    }
    return arr;
}

int main() {
    int arr_size;
    cout << "Input array size: ";
    cin >> arr_size;
    cout << "Input array: ";
    vector<int> arr_(arr_size);
    int x;
    for(int count = 0; count < arr_size; count++) {
        cin >> x;
        arr_.push_back(x);
    }
    arr_ = bubbleSort(arr_, arr_size);
    cout << "Sorted array: ";
    for(int count = 0; count < arr_size; count++) {
        cout << arr_.at(count) << " ";
    }
}
