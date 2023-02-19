#include <bits/stdc++.h>

using namespace std;

int t,n;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> t; 
    while (t--) 
    {
        string s;
	    cin >> n;
	    cin >> s;
	    int x,y,check;
        x = y = check = 0;
	    for (int i = 0;i < n;i++) 
        {
		    if (s[i] == 'L') x--;
		    if (s[i] == 'R') x++;
		    if (s[i] == 'D') y--;
		    if (s[i] == 'U') y++;
		    if (x == 1 && y == 1) 
            {
                check = 1;
                break;
            }
	    }	
	    if (check == 1) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}