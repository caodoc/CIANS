#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int num = 0;
        if (n % 7 == 0) cout << n;
        else
        {
            for (int i = 0;i <= 10;++i)
            {
                num = ((n / 10) * 10) + i;
                if (num % 7 == 0)
                {
                    cout << num;
                    break;
                }
            }
        }
        cout << "\n";
    }
}