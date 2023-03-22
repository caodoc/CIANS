#include <bits/stdc++.h>

using namespace std;

long long t,r,b,d;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> r >> b >> d;
        int temp = r - b;
        bool res = false;
        if (d * b >= temp && d * r >= -temp) res = true;
        if (res == true) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}