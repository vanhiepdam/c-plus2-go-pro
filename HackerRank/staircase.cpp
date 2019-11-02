#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int z = n;
    for(int count = 1; count <= n; count++, z--) {
        for(int count = 1; count <= n; count++) {
            if(count < z) cout << " ";
            else if( count >= z) cout << "#";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
