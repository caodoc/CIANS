#include<bits/stdc++.h>

using namespace std;

int a,b,c,kq;

main()
{
    cin >> a >> b >> c;
    if(c - b >= b - a) kq = c - b;
    else kq = b - a;
    cout << kq - 1;
}
