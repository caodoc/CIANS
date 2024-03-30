#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int t1,t2,t3,t4;
    while (n != 0)
    {
        n++;
        t1 = t2 = t3 = t4 = 0;
        t1 = n % 10;
        t2 = n / 10 % 10;
        t3 = n / 100 % 10;
        t4 = n / 1000 % 10;
        //cout << t1 << " " << t2 << " " << t3 << " " << t4 << endl;
        if (t1 != t2 && t1 != t3 && t1 != t4)
        if (t2 != t3 && t2 != t4)
        if (t3 != t4)
        if (t4 != t1)
        {
            cout << n;
            return 0;
        }
    }
}