#include <bits/stdc++.h>

using namespace std;

int t1,t2,t3,tp;

string s;

int main()
{
    cin >> s;
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] == '1') t1++;
        if (s[i] == '2') t2++;
        if (s[i] == '3') t3++;
        if (s[i] == '+') tp++;
    }   
    for (int i = 1;i <= t1;i++) 
    {
        cout << 1;
        if (tp > 0)
        {
            tp--;
            cout << "+";
        }
    }
    for (int i = 1;i <= t2;i++) 
    {
        cout << 2;
        if (tp > 0)
        {
            tp--;
            cout << "+";
        }
    }
    for (int i = 1;i <= t3;i++) 
    {
        cout << 3;
        if (tp > 0)
        {
            tp--;
            cout << "+";
        }
    }
}