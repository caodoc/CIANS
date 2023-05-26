#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        bool check = true;
        for (int i = 1;i <= n;i++) cin >> a[i];
        for (int i = 1;i < n - 1;i++)
        {   
            if(((a[i] % 2 == 0) && (a[i + 2] % 2 == 0))   ||  ((a[i] % 2 != 0) && (a[i + 2] % 2 != 0))) check = true;
            else
            {
                check = false;
                break;
            }
        }
        if (check == true) cout << "YES"; 
        else cout << "NO";
        cout << endl;
    }
}