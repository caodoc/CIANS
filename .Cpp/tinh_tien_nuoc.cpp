#include <bits/stdc++.h>

using namespace std;

int n,s;

int main()
{
    cin >> n; 
    if (n <= 10) s = n * 4000;
    else s = 40000 + (n - 10) * 7000;
    cout << s;
}