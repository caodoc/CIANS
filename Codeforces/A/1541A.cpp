#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s = 1;
        if (n % 2)
        {
            s = 4; 
            cout << "3 1 2 ";
        }
        for (int i = s;i < n;i += 2) cout << i + 1 << " " << i << " ";
        cout << endl;
    }
}