#include <bits/stdc++.h>

using namespace std;

int n,q;
map<int, int> m;

int main()
{
    cin >> n;
    int x = 0;
    for (int i = 1;i <= n;i++) 
    {
        cin >> x;
        m[x]++;
    }
    cin >> q;
    for (int i = 1;i <= q;i++)
    {
        cin >> x;
        cout << m[x] << endl;
    }
}