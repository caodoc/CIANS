#include<bits/stdc++.h>
#include <iostream>

using namespace std;

long long i,n,dem;

bool calc(int a)
{
    for (int i = 2;i * i <= a;i++) if (a % i == 0) return false;
    return true;
}

int main() 
{
    cin >> n;
    for (i = n + 1;i <= n * 2;i++) if (calc(i) == true) dem++;
    cout << dem;
}
