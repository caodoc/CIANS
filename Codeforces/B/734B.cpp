#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll two,three,five,six,t1,t2;

int main()
{
	cin >> two >> three >> five >> six;
	t1 = min(two, min(five, six));
	two -= t1;
	five -= t1;
	six -= t1;
	t2 = min(three, two);
	ll res = t1 * 256 + t2 * 32;
	cout << res;
}