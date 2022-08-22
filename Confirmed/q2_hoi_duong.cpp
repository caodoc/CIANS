#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long Ax,Ay,Bx,By,Cx,Cy,ccw;

int main()
{
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    ccw = (Bx - Ax) * (Cy - Ay)- (Cx - Ax) * (By - Ay);
    if (ccw == 0) cout << "TOWARDS";
    if (ccw > 0) cout << "LEFT";
    if (ccw < 0) cout << "RIGTH";
}