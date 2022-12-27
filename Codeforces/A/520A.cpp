#include <bits/stdc++.h>

using namespace std;

int n;
set<int> s;

int main()
{
    cin >> n;
    char x;
    for (int i = 0;i < n;i++)
    {
        cin >> x;
        char y = toupper(x);
        s.insert(y);
    }
    //cout << s.size();
    if (s.size() == 26) cout << "YES"; else cout << "NO";
}