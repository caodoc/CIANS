#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> f;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int i = 2;
    while (n >= 2)
    {
        while (n % i == 0)
        {
            f.push_back(i);
            n /= i;
        }
        i++;
    }
    for (int i = 0;i < f.size() - 1;++i) cout << f[i] << "*";
    cout << f[f.size() - 1];
}