#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;

long long n,a[N],t1,t2;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) 
    {
        cin >> a[i];
        if (a[i] > 0) t1 = 1;
    }
    sort(a + 1,a + 1 + n);
    //for (int i = 1;i <= n;i++) cout << a[i] << " ";
    //cout << endl;
    if (t1 == 0) cout << a[n] * a[n - 1];
    else if (a[1] < 0) cout << a[1] * a[n]; else cout << a[1] * a[2];
}