#include <bits/stdc++.h>

using namespace std;

int a[10] = {0};

int main()
{
    for (int i = 1;i <= 4;i++) cin >> a[i];
    sort(a + 1,a + 5);
    //for (int i = 1;i <= 4;i++) cout << a[i] << " ";
    //cout << endl;
    if (a[1] == a[2] && a[2] == a[3]) for (int i = 1;i <= 3;i++) cout << a[1] / 2 << " ";
    else
    {
        int c = a[4] - a[1];
        int b = a[3] - c;
        cout << a[4] - b - c << " " << b << " " << c;
    }
}