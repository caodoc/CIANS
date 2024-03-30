#include <bits/stdc++.h>

using namespace std;

int calc(int k)
{
    if (k == 0) return 0;
    else if (k == 1) return 1;
    return calc(k - 1) + calc(k - 2);
}

int n;

int main()
{
    cin >> n;
    cout << calc(n);
}