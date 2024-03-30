#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;i++) 
    {
        cin >> x;
        int res = 0,a[100005] = {0},tmp = 0;
        if( x >= 1000)
        {
            res++;
            tmp = x % 1000;
            a[res] = x - tmp;
            x %= 1000;
        }
        if (x >= 100)
        {
            res++;
            tmp = x % 100;
            a[res] = x - tmp;
            x %= 100;
        }
        if (x >= 10)
        {
            res++;
            tmp = x % 10;
            a[res] = x - tmp;
            x %= 10;
        }
        if(x < 10 && x > 0)
        {
            res++;
            a[res] = x;
        }
        cout << res << endl;
        for (int j = 1;j <= res;j++) cout << a[j] << " ";
        cout << endl;
    }
}