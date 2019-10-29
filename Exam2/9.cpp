#include <iostream>

using namespace std;

int main()
{
    int arraySize;
    int index1, index2, intVoid;
    cout << "This program can swap position of numbers in an array by specified index of two\n";
    tryAgain:
    cout << "Input array length: ";
    cin >> arraySize;

    if(arraySize == 1) {
        cout << "?\n";
        goto tryAgain;
    }
    arraySize--;
    int arrayList[arraySize];
    cout << "\nInput an array: ";
    for(int countNumber = 0; countNumber <= arraySize; countNumber++) cin >> arrayList[countNumber];
    reset:
    cout << "Choose 2 positions you wanna change: ";
    cin >> index1 >> index2;
        index1--;
        index2--;
        if((index1 >= (arraySize + 1)) || (index2 >= (arraySize + 1))) {
            cout << "Input can not exceed arry length\n";
            goto reset;
        }
        if((index1 < 0) || (index2 < 0)) {
            cout << "Input can not be smaller then 0\n";
            goto reset;
        }
    intVoid = arrayList[index1];
    arrayList[index1] = arrayList[index2];
    arrayList[index2] = intVoid;
    for(int countNumber = 0; countNumber <= arraySize; countNumber++) cout << arrayList[countNumber] << " ";
}

