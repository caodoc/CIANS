#include <bits/stdc++.h>

using namespace std;

long long t,n,tmp,res;
char ch;

int main()
{
    cin >> t >> n;
    while (t--)
    {
        cin >> ch >> tmp;
        if (ch == '+') n += int(tmp);
        else if (tmp <= n) n -= int(tmp);
        else res++;
    }
    cout << n << " " << res;
}