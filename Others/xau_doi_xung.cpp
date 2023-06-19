#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int base = 311;
const int N = 1e6 + 5;
const ll MOD = 1e9 + 5;
const ll MM = 1ll * MOD * MOD;

using namespace std;

string s,r;
int pos,n;
ll hashR,Pow[N],HashS[N];

ll GetHashS(int i,int j)
{
    return (HashS[j] - HashS[i - 1] * Pow[j - i + 1] + MM) % MOD;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("PALIND.INP","r",stdin);
    //freopen("PALIND.OUT","w",stdout);
    cin >> s;

    n = s.size();
    s = " " + s;
    Pow[0] = 1;

    for (int i = 1;i <= n;++i)
    	Pow[i] = (Pow[i - 1] * base) % MOD;
    for (int i = 1;i <= n;++i)
    	HashS[i] = (HashS[i - 1] * base + s[i]) % MOD;

    for (int i = n;i >= 1;--i)
    {
        hashR = (hashR * base + s[i]) % MOD;
        if (GetHashS(i, n) == hashR) 
        {
            pos = i;
            //cout << i << " ";
        }
    }

    //cout << endl;

    s.erase(0, 1);
    pos -= 1;
    //cout << pos << endl;
    for (int i = pos - 1;i >= 0;--i) r += s[i];
    cout << s + r;
}