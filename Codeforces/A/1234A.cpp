#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long x,sum = 0;
        for (int i = 1;i <= n;++i) 
        {
            cin >> x;
            sum += x;
        }
        unsigned long long res = ceil(double(sum)/double(n));
        cout << res << endl;
    }
}