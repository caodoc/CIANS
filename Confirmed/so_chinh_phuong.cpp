#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long n,tmp1;
double tmp2;

int main()
{
    cin >> n;
    tmp1 = sqrt(n);
    tmp2 = sqrt(n);
    if (tmp1 == tmp2) cout << "YES"; else cout << "NO";
}