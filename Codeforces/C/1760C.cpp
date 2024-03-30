#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{ 
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ar[n + 1];
        pair<int, int> p[n + 1];
        for (int i = 1;i <= n;i++)
        {
            cin >> ar[i] ;
            p[i] = make_pair(ar[i], i);
        } 
        sort(p + 1,p + 1 + n);
        for (int i = 1;i <= n;i++) 
            if (p[n].second == i)
                cout << ar[i] - p[n - 1].first << " ";
            else
                cout << ar[i] - p[n].first << " ";
        cout << endl;
    }
} 