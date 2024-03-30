#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;
long long a[N],n,i,j,tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i = 1;i <= n;i++) 
    {
        cin >> a[i];
        for (j = 1;j <= i;j++) if (a[i] < a[j]) tmp++;
        cout << tmp + 1 << endl;
        tmp = 0;
    }
}