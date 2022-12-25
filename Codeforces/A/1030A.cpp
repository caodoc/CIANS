#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        if (x == 1) 
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}