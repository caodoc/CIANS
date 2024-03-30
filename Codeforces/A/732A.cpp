#include <bits/stdc++.h>

using namespace std;

int k,r;

int main()
{
    cin >> k >> r;
    bool ck = true;
    int res = 0;
    while (ck)
    {
        res++;
        if (res * k % 10 == r || res * k % 10 == 0) ck = false;
    }
    cout << res;
}