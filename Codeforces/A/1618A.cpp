#include<bits/stdc++.h>

using namespace std;

int t;

int main() 
{
	cin >> t;
	while (t--) 
    {
		int a,b,c,ar[8];
        for (int i = 1;i <= 7;i++) cin >> ar[i];
	    a = ar[1];
	    b = ar[2];
	    c = ar[7] - (a + b);
	    cout << a << ' ' << b << ' ' << c << endl;
	}
}