#include<bits/stdc++.h>

using namespace std;

int l,r,a[1000006],n = 1000000,d;

int main() 
{
    //freopen("NKABD.INP","r",stdin);
	//freopen("NKABD.OUT","w",stdout);
	for (int i = 1; i <= n; i++) a[i] = 0;
	for (int i = 1; i <= n; i++) for (int j = 1; j <= n / i; j++) a[j * i] += i;
	cin >> l >> r;
	for (int i = l; i <= r; i++) if (a[i] - i > i) d++;
	cout << d;
}
