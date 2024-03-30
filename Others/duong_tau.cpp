#include <bits/stdc++.h>

using namespace std;

int q,n;
long long a,x,b,y;

long long calc(int x, int y)
{
    return (y - x + n) % n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("METRO.INP","r",stdin);
    //freopen("METRO.OUT","w",stdout);
    cin >> q;
    while (q--)
    {
        cin >> n >> a >> x >> b >> y;
        bool check = false;
        if (calc(a, b) % 2 == 0 && calc(a, x) >= calc(a, b) / 2 && calc(y, b) >= calc(a, b) / 2)
            check = true;
        if ((calc(a, b) + n) % 2 == 0 && calc(a, x) >= (calc(a, b) + n) / 2 && calc(y, b) >= (calc(a, b) + n) / 2)
            check = true;
        if (check) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}