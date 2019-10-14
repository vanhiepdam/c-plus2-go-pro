#ifndef SOURCE_H
#define SOURCE_H
#include <iostream>

using namespace std;
void sentence1() {
    cout << "This program calculate the sum of list of integer numbers\nNote that the length of list is less than or equal 100\nType *;* to get the sum\n";
    int cinNumber, sum = 0;
    int loop = 1;
    string getsum;
    while(loop <= 100) {
        cin >> cinNumber, getsum;
        if(getsum == ";") break;
        sum += cinNumber;
        loop++;
    }
    cout << "Sum: " << sum;
}
void sentence2() {
    cout << "This program show 3 smallest number in a list\nType ; to get the result\n";
    int number1st = 2100000000, number2nd = 2100000001, number3rd = 2100000002, listLitmit = 1;
    string getResult;
    for(int numberGiven ;listLitmit <= 30; listLitmit++) {
        cin >> numberGiven, getResult;
        if(getResult == ";") break;
        if(numberGiven == 0) continue;
        if(numberGiven <= number1st){
            number3rd = number2nd;
            number2nd = number1st;
            number1st = numberGiven;
        }
        else if(numberGiven <= number2nd) {
                number3rd = number2nd;
                number2nd = numberGiven;
        }
            else if(numberGiven <= number3rd) number3rd = numberGiven;
    }
    cout << "1st: " << number1st << "\n2nd: " << number2nd << "\n3rd: " << number3rd << "\n";}
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
void sentence4()
{
   int termNumber;
   int countNumber = 1;
   long long displayNumber = 9, sum = 0;
   cout << "Note:term litmit = 18\nInput number of terms: ";
   cin >> termNumber;
   while(countNumber <= termNumber) {
        cout << displayNumber << " ";
        sum += displayNumber;
        displayNumber *= 10; displayNumber += 9;
        countNumber++;
   }
   cout << "\nThe sum of the sarise = " << sum << endl;
}
void sentence5()
{
    int sum1 = 0, sum2 = 0;
    int term;
    cout << "Input the value for nth term: ";
    cin >> term;
    for(int countNumber1 = 1; countNumber1 <= term; countNumber1++) {
        for(int turn = 1; turn <= countNumber1; turn++) {
            cout << turn;
            sum1 += turn;
            if((countNumber1 > 1) && (turn < countNumber1)) cout << "+";
        }
        cout << " = " << sum1 << endl;
        sum2 += sum1;
        sum1 = 0;
    }
    cout << "The sum of the above series is: " << sum2 << endl;

}
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
void sentence8()
{
    short choice;
    int width, height, square;
    int triangle1, triangle2 = 1;
    cout << "Type 1 to display rectangle\nType 2 to display square\nType 3 to display Isosceles Triangle\nChoose type of geometry you wanna draw: ";
    cin >> choice;
    if(choice == 1) {
        cout << "Input for rectangle\n (width height)" << endl;
        cin >> width >> height;
        for(int countNumber = 1; countNumber <= height; countNumber++) {
            for(int countNumber = 1; countNumber <= width; countNumber++) cout << "* ";
            cout << endl;
        }
    }
        else if(choice == 2) {
            cout << "Input for square" << endl;
            cin >> square;
            for(int countNumber = 1; countNumber <= square; countNumber++) {
                for(int countNumber = 1; countNumber <= square; countNumber++) cout << "* ";
                cout << endl;
            }
        }
            else if(choice == 3) {
                cout << "Input for triangle: ";
                cin >> triangle1;
                triangle1++;
                while(triangle2 <= triangle1) {
                    for(int countNumber = 0; countNumber < triangle1 - triangle2;countNumber++) cout << " ";
                    for(int countNumber = 1; countNumber < triangle2; countNumber++) cout << "* ";
                    cout << endl;
                    triangle2++;
                }
            }
}
void sentence9()
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
        if((index1 >= (arraySize + 1)) || (index2 >= (arraySize + 1))) {
            cout << "Input can not exceed arry length\nNote:postion of indexes start from 0 *0 1 2 3 4 ...*\n";
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
#endif
