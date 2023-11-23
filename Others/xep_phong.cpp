#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,ar[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int x,check = 0,i = 0;
    while (m--)
    {
        cin >> x;
        if (check == 0)
        {
            while (x > 0)
            {
                ++i;
                ar[i] += min(x, 2);
                x -= 2;
                if (i == n)
                {
                    check = 1;
                    i = 1;
                    break;
                }
            }
        }
        if (check == 1)
        {
            while (x > 0)
            {
                ++i;
                if (ar[i] == 1) ar[i]++;
                --x;
            }
        }
        //for (int i = 1;i <= n;++i) cout << ar[i] << "\n";
    }
    for (int i = 1;i <= n;++i) cout << ar[i] << "\n";
}