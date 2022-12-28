#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int t100,t20,t10,t5,t1;
    t100 = t20 = t10 = t5 = t1 = 0;
    t100 = n / 100;
    n -= t100 * 100;
    t20 = n / 20;
    n -= t20 * 20;
    t10 = n / 10;
    n -= t10 * 10;
    t5 = n / 5;
    n -= t5 * 5;
    t1 = n;
    cout << t100 + t20 + t10 + t5 + t1;
}