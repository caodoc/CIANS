#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int res = 1;
    for(int i = 2;i < sqrt(n);i++) if (n % i == 0) res += 2;
    int t1 = sqrt(n);
    double t2 = sqrt(n);
    if(t1 == t2) res++;
    cout << res;
}