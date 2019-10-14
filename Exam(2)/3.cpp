#include <iostream>

using namespace std;

void sentence3()
{
    int oddNumber = 1;
    int divisibleNumber = 3;
    int countNumber = 1;
    bool truefalse = true;
    do //odd number
    {
        if(truefalse == true) {
            cout << oddNumber << " ";
            truefalse = false;
            oddNumber++;
            countNumber++;
            continue;
        }
        truefalse = true;
        oddNumber++;
        countNumber++;
    }
    while(countNumber <= 10000);
    cout << "\n";
    countNumber = 1;
    do //divisible by 3
    {
        if(countNumber == divisibleNumber) {
            cout << countNumber << " ";
            divisibleNumber += 3;
        }
        countNumber++;
    }
    while(countNumber <= 10000);
}
