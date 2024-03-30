#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        char x;
        cin >> x;
        if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's') cout << "YES"; else cout << "NO";
        cout << endl;
    }
}