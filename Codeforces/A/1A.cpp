#include <bits/stdc++.h>

using namespace std;

unsigned long long n,m,a;

int main()
{
    cin >> n >> m >> a;
    unsigned long long t = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << t;
}