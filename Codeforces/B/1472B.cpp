#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x,s,tmp;
        s = tmp = 0;
        for (int i = 1;i <= n;i++) 
        {    
            cin >> x;
            if(x == 1)
            {
                tmp++;
                s++;
            }
            else s += 2;
        }
        if (s % 2 == 0)
        {
            int t = s / 2;
            if (t % 2 == 0) cout << "YES" << endl;
            else
            {
                if (tmp) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
        else cout << "NO" << endl;
    }
}