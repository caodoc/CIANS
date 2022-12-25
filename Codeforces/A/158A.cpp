#include <bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
    
    cin >> n >> k;
    int a,b;
    for (int i = 0;i < k;i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    for (int i = k;i < n;i++)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
}