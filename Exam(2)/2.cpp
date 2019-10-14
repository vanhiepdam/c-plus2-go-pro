#include <iostream>

using namespace std;

int main() {
    cout << "This program show 3 smallest number in a list\nNote: value 0 does not count.\nType ; or anything that's not a number to get the result\n";
    int number1st = 2100000000, number2nd = 2100000001, number3rd = 2100000002, listLitmit = 1;
    for(int numberGiven ;listLitmit <= 30; listLitmit++) {
        cin >> numberGiven;
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
