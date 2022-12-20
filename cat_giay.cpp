#include<bits/stdc++.h>

using namespace std;

int a,b,tam,d;

main() 
{
    //freopen("CATGIAY.INP","r",stdin);
	//freopen("CATGIAY.OUT","w",stdout);
    cin >> a >> b;
    if (a < b) swap(a,b);
    while (b > 0)
    {
        tam = a - b;
        d++;
        a = max(tam, b);
        b = min(tam, b);
    }
    cout << d;
}
