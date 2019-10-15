#include <iostream>

using namespace std;
// 4 5 2 6
int main()
{
    short Index1 = 0, resultArrayIndex = 0, currentlySmallestIndex, checkingIndex;
    short arrayLength = 0;
    cout << "This program can sort an array by ascending\nInput array length: ";
    cin >> arrayLength;
    arrayLength--;
    int arrayIndex[arrayLength];
    short resultArray[arrayLength];
    cout << "Input an array: ";
    for(short countNumber = 0; countNumber <= arrayLength; countNumber++, Index1++) {
        cin >> arrayIndex[Index1];
    }
    bool smallerCheck = true;
    currentlySmallestIndex = 0;
    checkingIndex = 1;
    for(short countNumber = 0; countNumber <= arrayLength; countNumber++, resultArrayIndex++) {
        for(short countNumber = 0; countNumber <= arrayLength; countNumber++, checkingIndex++) {
            if(checkingIndex == (arrayLength + 1)) checkingIndex = 0;
            if(arrayIndex[currentlySmallestIndex] == 2100000000) currentlySmallestIndex++;
            if(arrayIndex[currentlySmallestIndex] > arrayIndex[checkingIndex]) currentlySmallestIndex = checkingIndex;
        }
        resultArray[resultArrayIndex] = arrayIndex[currentlySmallestIndex];
        arrayIndex[currentlySmallestIndex] = 2100000000;
        currentlySmallestIndex = 0;
    }
    cout << endl;
    resultArrayIndex = 0;
    for(short countNumber = 0; countNumber <= arrayLength; countNumber++, resultArrayIndex++) cout << resultArray[resultArrayIndex] << " ";
}
