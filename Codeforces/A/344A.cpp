#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N];

int main()
{
    cin >> n;
    int t = 1,res = 0;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) if (a[i] == a[i + 1]) 
    {
        t++;
        //cout << i << " " << i + 1 << endl;
    }
    else
    {
        t = 1;
        res++;
    }
    cout << res;
}