#include <bits/stdc++.h>

using namespace std;

int t1,t2;

string s1,s2;

int main()
{
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for (int i = 0;i < s1.size();i++) 
    {
        if (s1[i] < s2[i]) 
        {
            cout << -1;
            return 0;
        }
        if (s1[i] > s2[i])
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
}