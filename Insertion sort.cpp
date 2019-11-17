#include <iostream>
#include <vector>

using namespace std;
int temp = 0;

vector<int> arr;
void insertionSort(int n) {
    if(arr.at(n) < arr.at(n - 1)) {
        temp = arr.at(n);
        arr.at(n) = arr.at(n - 1);
        arr.at(n - 1) = temp;
        if(n == 1) {
            insertionSort(n + 1);
        }
        else if(n > 1) {
            insertionSort(n - 1);
        }
    } else {
        if(n == (arr.size() - 1)) {
            return;
        }
        else {
            insertionSort(n + 1);
        }
    }
}

int main () {
    int size_arr;
    int x;
    cout << "Input array size: ";
    cin >> size_arr;
    cout << "Input array: ";
    for(int count = 0; count < size_arr; count++) {
        cin >> x;
        arr.push_back(x);
    }
    insertionSort(1);
    for(int count = 0; count < arr.size(); count++) {
                cout << arr.at(count) << " ";
    }
}
