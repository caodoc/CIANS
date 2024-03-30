#include <bits/stdc++.h>

using namespace std;

int n,p,q,a[110];

int main()
{
    cin >> n >> p;
    int x;
    for (int i = 1;i <= p;i++)
    {
        cin >> x;
        a[x]++;
    }
    cin >> q;
    for (int i = 1;i <= q;i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 1;i <= n;i++) if (a[i] == 0) 
    {
        cout << "Oh, my keyboard!";
        return 0;
    }
    cout << "I become the guy.";
}