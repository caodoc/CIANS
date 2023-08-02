#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    long long res = 0;
    for (long long i = 1;i <= x;++i)
    {
        long long temp = i * i;
        if (temp <= x) res = i;
        else break;
    }
    return res;
    //return res;
}