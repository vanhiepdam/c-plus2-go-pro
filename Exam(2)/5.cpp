#include <iostream>

using namespace std;

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
