#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        int res = 0,j = 0,u = 1;
        while(j != x)
        {
            if(u % 3 != 0 && u % 10 != 3)
            {
                res = u;
                u++;
            }
            else
            {
                u++;
                continue;
            }
            j++;
        }
        cout << res << endl;
    }
}