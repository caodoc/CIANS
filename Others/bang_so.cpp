#include <bits/stdc++.h>

using namespace std;

long long n,x,res,i;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    for (i = 1;i <= sqrt(x);i++) 
        if (x % i == 0 && i <= n && x / i <= n) 
        {
            res++;
            if (x / i != i) res++;
            //cout << i << " " << x / i << endl;
        }
    cout << res; 
}