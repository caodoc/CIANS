#include <bits/stdc++.h>

using namespace std;

double s,w,h;

int main()
{
    cin >> w >> h;
    s = w / (h * h);
    cout << setprecision(1) << fixed << s << endl;
    if (s < 20) cout << "Nguoi gay";
    if (s >= 20 && s <= 30) cout << "Nguoi li tuong";
    if (s > 30) cout << "Nguoi beo";
}