#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,target;
    vector<int> nums;
    cin >> t >> target;
    for (int i = 0;i < t;++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int var = target - nums[i];
        if (mp.count(var))
        {
            cout << mp[var] << " " << i;
            break;
            //return {mp[var], i};
        }
        mp[nums[i]] = i;
    }
    //return {};
}