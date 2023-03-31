#include <bits/stdc++.h>

using namespace std;
 
int t;
double a,b,c,d;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if ((b > 0 && d < 0) || (b < 0 && d > 0)) d = -d;
        double res = sqrt(pow(a - c, 2) + pow(b - d, 2));
        printf("%0.0f\n",res);
    }
}