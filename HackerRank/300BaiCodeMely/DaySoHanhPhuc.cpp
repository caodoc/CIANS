#include <bits/stdc++.h>

using namespace std;

long long n;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0) n = n / 2;
        else n = n * 3 + 1;
        cout << n << " ";
    }
}