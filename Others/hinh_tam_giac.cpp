#include <bits/stdc++.h>
#include <iostream>

using namespace std;

float a,b,c,p,s;

int main()
{
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(1) << fixed << a + b + c << endl << s;
}