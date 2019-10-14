#include <iostream>

using namespace std;

int main()
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
