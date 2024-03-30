#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n - 1) / 2 << " " << n - 1 << endl;
    }
}