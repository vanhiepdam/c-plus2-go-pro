#include <iostream>
#include <vector>

using namespace std;
int temp = 0;
unsigned int n = 1;
vector<int> insertionSort(vector<int> arr) {
    if(n < arr.size() && arr.at(n) < arr.at(n-1)) {
        temp = arr.at(n);
        arr.at(n) = arr.at(n - 1);
        arr.at(n - 1) = temp;
        if(n == 1) {
            n++;
            insertionSort(arr);
        }
        else if(n > 1) {
            n--;
            insertionSort(arr);
        }
    } else {
        if(n == (arr.size() - 1)) {
            return arr;
        }
        n++;
        insertionSort(arr);
    }
}

int main () {
    int size_arr;
    cout << "Input array size: ";
    cin >> size_arr;
    vector<int> arr(size_arr);
    cout << "Input array: ";
    for(int count = 0; count < size_arr; count++) {
        cin >> arr.at(count);
    }
    arr = insertionSort(arr);
    cout << "\n";
    for(int count = 0; count < size_arr; count++) {
        cout << arr.at(count) << " ";
    }
    cout << "Test changes"
}
