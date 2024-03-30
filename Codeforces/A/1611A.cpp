#include <bits/stdc++.h>

using namespace std;

int t,n;
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        int res = -1,n = s.size();
		if ((s[n - 1] - '0') % 2 == 0) 
        {
            res = 0; 
        }
        else if ((s[0] - '0') % 2 == 0) 
        {
			res = 1;
		} 
        else 
        {
			bool ck = false;
			for (int i = 0; i < n; i++) 
			    if ((s[i] - '0') % 2 == 0) 
                {
					ck = true;
					break;
				}
			if (ck == true) res = 2;
		}
		cout << res << endl;
    }
}