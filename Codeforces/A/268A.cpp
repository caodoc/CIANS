#include <bits/stdc++.h>

using namespace std;

int n,a[1005],h[1005],res;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) 
    {
        cin >> h[i] >> a[i]; 
        for (int j = 1;j < i;j++) 
        {
            if (h[i] == a[j]) res++;
            if (a[i] == h[j]) res++;
        }
    }
    cout << res;
}