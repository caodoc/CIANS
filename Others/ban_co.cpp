#include <bits/stdc++.h>

using namespace std;

int n,m,x,dem,i,tmp1,tmp2;
bool check = true;

int main()
{
    cin >> n >> m;
    x = min(n, m);
    while (check == true)
    {
        i++;
        tmp2 = i * i;
        if (i % 2 == 0)
        {
            tmp1 = tmp2 / 2;
            if (x < tmp1) check = false; else dem++;
        }
        else
        {
            tmp1 = tmp2 / 2;
            if (x < tmp1) check = false; else dem++;
        }
    }
    cout << dem;
}