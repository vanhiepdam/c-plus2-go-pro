#include <iostream>

using namespace std;

void sentence6()
{
    short numb1 = 1, numb2 = 1, numb3 = 1, countNumber = 0;
    short runtimeCount = 0;
    do {
        runtimeCount++;
        if(numb3 == 5){
            numb3 = 1;
            numb2++;
        if(numb2 == 5) {
            numb2 = 1;
            numb1++;
            }
        }
        if(numb3 <= 4) {
            if((numb1 != numb2) && (numb2 != numb3) && (numb1 != numb3)) {
                cout << numb1 << numb2 << numb3 << " ";
                countNumber++;
            }
            numb3++;
        }
    }
    while(numb1 <= 4);
    cout << "\nTotal number of the three-digit-number is: " << countNumber << endl;
    cout << "Runtime: " << runtimeCount;
}
