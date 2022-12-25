#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main()
{
    cin >> n >> s;
    int d = 0,a = 0;
    for (int i = 0;i < n;i++) if (s[i] == 'D') d++; else a++;
    //cout << d << " " << a << endl;
    if (d == a) cout << "Friendship";
    if (d > a) cout << "Danik";
    if (d < a) cout << "Anton";
}