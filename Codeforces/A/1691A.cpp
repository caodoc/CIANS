#include <bits/stdc++.h>

using namespace std;

int t,n;

int main() 
{
    cin >> t;
	while (t--) 
    {
		cin >> n;
		int ar[n + 1];
		int res = 0;
		for (int i = 1;i <= n;i++) cin >> ar[i];
		for (int i = 1;i <= n;i++) if (ar[i] % 2 == 0) res++;
		cout << min(res, n - res) << endl;
	}
}