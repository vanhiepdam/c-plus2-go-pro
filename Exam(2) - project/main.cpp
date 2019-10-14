#include <iostream>
#include <unistd.h>
#include "SOURCE.H"

using namespace std;

int main()
{
    back_to_main:
    string yes_no = "?";
    short sentence;
    cout << "Input a sentence number to examine *1-10*" << endl;
    cin >> sentence;
    if(sentence == 1) sentence1();
    else if(sentence == 2) sentence2();
    else if(sentence == 3) sentence3();
    else if(sentence == 4) sentence4();
    else if(sentence == 5) sentence5();
    else if(sentence == 6) sentence6();
    else if(sentence == 7) sentence7();
    else if(sentence == 8) sentence8();
    else if(sentence == 9) sentence9();
    else if((sentence > 10) || (sentence < 0)) {
        cout << "?" << endl;
        goto back_to_main;
    }
    cout << "\n Go back to main? yes/no" << endl;
    cout << "";
    cin >> yes_no;
    if(yes_no == "yes") goto back_to_main;
}

