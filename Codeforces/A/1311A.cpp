#include <bits/stdc++.h>

using namespace std;

int t,a,b;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int res = 0;
        if (a == b) cout << 0;
        else
        {
            if (a > b)
            {
                if ((a - b) % 2 == 0)
                {
                    cout << 1;
                }
                else cout << 2;
            }
            else
            {
                if ((a - b) % 2 == 0)
                {
                    cout << 2;
                }
                else cout << 1;
            }
        }
        cout << "\n";
    }
}