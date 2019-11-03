#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s[8] == 'P') {
        int idk = stoi(s.substr(0,2));
        if(idk != 12) {
            idk += 12;
            string temp = to_string(idk);
            s.replace(0,2,temp);
        }
    }
    else if(s[8] == 'A') {
        int idk2 = stoi(s.substr(0,2));
        if(idk2 == 12) {
            s.replace(0,2,"00");
        }
    }
    s.resize(8);
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
