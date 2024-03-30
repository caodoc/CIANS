#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        bool check = false;
        if (a == b + c || b == a + c || c == a + b) check = true;
        if ((a % 2 == 0 && b == c) || (b % 2 == 0 && a == c) || (c % 2 == 0 && a == b)) check = true;
        if (check == true) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}