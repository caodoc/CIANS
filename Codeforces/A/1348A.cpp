#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;        
        long long s1,s2,a[N],tmp,k;
        s1 = s2 = tmp = k = 0;
        for(int i = 1;i <= n;i++) a[k++] = pow(2, i);
        tmp = n / 2;
        s1 = a[n - 1];
        for(int i = 0;i <= tmp - 2;i++) s1 += a[i];
        for(int i = tmp - 1;i < n - 1;i++) s2 += a[i];
        cout << abs(s1 - s2) << endl;
    }
}