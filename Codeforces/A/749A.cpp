#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

int n,res,a[N];

int calc(int x)
{
    int tmp = 0;
    for (int i = 1;i <= sqrt(x);i++) if (x % i == 0) if (x % i == i) tmp++; else tmp += 2;
    return tmp;
}

int main()
{
    cin >> n;
    if(n % 2 == 1) 
    {
        n /= 2;
        n--;
        cout << n + 1 << endl << 3 << " ";
    }
    else 
    {
        n /= 2;
        cout << n << endl;
    }
    for (int i = 0; i < n; i++) cout << 2 << " ";
    cout << endl;
}