#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int res,tmp,k;
    tmp = 1;
    k = 2;
    while (n >= 0)
    {
        n -= tmp;
        res++;
        tmp += k;
        k++;
    }
    cout << res - 1;
}