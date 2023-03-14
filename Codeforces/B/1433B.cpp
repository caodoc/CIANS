#include<bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ar[n + 1] = {0};
        for (int i = 1;i <= n;i++) cin >> ar[i];
        int pos1,pos2,res;
        res = pos1 = pos2 = 0;
        for (int i = 1;i <= n;i++)
            if (ar[i] == 1)
            {
                pos1 = i;
                break;
            }
        for (int i = n;i >= 1;i--)
            if (ar[i] == 1)
            {
                pos2 = i;
                break;
            }
        for (int i = pos1;i <= pos2;i++)
            if (ar[i] == 0) res++;
        cout << res << endl;
    }
}
