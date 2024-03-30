#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int> res;
		for (int i = 1;(i * i) <= n;i++) res.insert(i * i);
		for (int i = 1;(i * i * i) <= n;i++) res.insert(i * i * i);
		cout << int(res.size()) << endl;
    }
}