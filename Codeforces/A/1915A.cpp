#include <bits/stdc++.h>

using namespace std;

int t,ar[4];

int main()
{
    cin >> t;
    while (t--)
    {
        memset(ar, 0, sizeof(ar));
        cin >> ar[1] >> ar[2] >> ar[3];
        sort(ar + 1, ar + 4);
        if (ar[1] == ar[2]) cout << ar[3];
        else cout << ar[1];
        cout << "\n";
    }
}