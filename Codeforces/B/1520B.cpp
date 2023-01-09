#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll res = 0,tmp;
        for (int i = 1;i <= 9;i++)
    	{
    		tmp = i;
    		while (tmp <= n)
    		{
    			res++;
    			tmp = tmp * 10 + i;
			}
		}
		cout << res << endl;
    }
}