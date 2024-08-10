#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    s[9] = ' ';
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else
    {
        if(s[0] != '1' || s[1] != '2')
        {
            char ch = s[0];
            ch++;
            s[0] = ch;
            ch = s[1] + 2;
            s[1] = ch;
        }
    }
    s[8] = ' ';
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
