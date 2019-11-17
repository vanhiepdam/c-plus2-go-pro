#include <iostream>

using namespace std;

int bubbleSort(int arr[], int Size, int elmt) {
    if(Size = 0) {
        return arr;
    }
    else {
        int temp;
        if(elmt == Size) {
            if(Size == arr.size()){
                return arr[];
            } else {
                Size++;
                bubbleSort(arr, Size, elmt);
            }
        }
        else {
        if(arr[elmt] < arr[elmt + 1]) {
            temp = arr[elmt];
            arr[elmt] = arr[elmt + 1];
            arr[elmt + 1] = temp;
        }
        elmt++;
        bubbleSort(arr, Size, elmt);
    }
}

int main() {
    int arr_size;
    cout << "Input array size: ";
    cin arr_size;
    cout << "Input array: ";
    int arr[arr_size];
    for(int count = 0; count < arr_size; count++) {
        cin >> arr[count];
    }
    bubbleSort(arr, arr_size);
    cout << "Sorted array: ";
    for(int count = 0; count <arr_size; count++) {

    }
}
