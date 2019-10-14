#include <iostream>

using namespace std;

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
    cout << "1st: " << number1st << "\n2nd: " << number2nd << "\n3rd: " << number3rd << "\n";
}
