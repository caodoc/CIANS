#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c1,c2;
        c1 = c2 = 0;
        if(n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3 << endl;
            continue;
        }
        if(n % 3 == 1)
        {
            cout << n / 3 + 1 << " " << n / 3 << endl;
            continue;
        }
        cout << (n / 3) << " " <<n / 3 + 1 << endl;
    }
}