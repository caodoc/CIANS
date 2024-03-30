#include <bits/stdc++.h>

using namespace std;

int t,xA,yA,xB,yB,xC,yC;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        int dx = abs(xA - xB); 
        int dy = abs(yA - yB); 
        int res = dx + dy;
        if (yA == yB && yA == yC &&  ((xA < xC && xC < xB) || (xB < xC && xC < xA))) res += 2;
        else if(xA == xB && xA == xC && ((yA < yC && yC < yB) || (yB < yC && yC < yA))) res += 2;
        cout << res << endl;
    }
}