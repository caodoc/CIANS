#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || c + a >= 10) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}