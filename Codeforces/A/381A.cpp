#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,a[1007];

int main() 
{
    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    int j = n - 1;
    int f = 0,res1 = 0,res2 = 0;
    for(int i = 0;i < n;i++) if(a[f] > a[j])
    {
        if(i % 2 == 0) res1 += a[f]; else res2 += a[f];
        f++;
    }
    else
    {
        if(i % 2 == 0) res1 += a[j]; else res2 += a[j];
        j--;
    }
    cout << res1 << " "<< res2;
}