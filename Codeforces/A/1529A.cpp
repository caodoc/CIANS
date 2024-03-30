#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int tmp = INT_MAX;
        int cnt = 0;
        int x;
        for (long i = 1;i <= n;i++)
        {
            cin >> x;
            if (x < tmp)
            {
                tmp = x; 
                cnt = 1;
            }
            else if (x == tmp) cnt++;
        }
        cout << n - cnt << endl;
    }
}