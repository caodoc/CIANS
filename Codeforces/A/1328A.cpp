#include <bits/stdc++.h>

using namespace std;

int n,a,b;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a >> b;
        if (a % b == 0) cout << 0 << endl;
        else
        {
            int t = 1 + a / b;
            cout << t * b - a << endl;
        }
    }
}