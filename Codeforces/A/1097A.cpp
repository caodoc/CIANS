#include <bits/stdc++.h>

using namespace std;

string a,b;

int main()
{
    cin >> a;
    for (int i = 1;i <= 5;i++)
    {
        cin >> b;
        if (a[0] == b[0] || a[1] == b[1]) 
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}