#include <iostream>

using namespace std;

void sentence7()
{
    int rowNumber;
    int countNumber = 1;
    cout << "Input number of rows: ";
    cin >> rowNumber;
    for(; countNumber <= rowNumber; countNumber++) {
        for(int countNumber1 = 1; countNumber1 <= countNumber; countNumber1++) {
            cout << countNumber;
        }
        cout << endl;
    }
}
