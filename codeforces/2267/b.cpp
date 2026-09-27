#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &x : v)
            cin >> x;

        vector<int> ans;

        unordered_map<int, int> mp;

        for (int num : v)
            mp[num]++;

        bool allDone = false;

        int maxEl = *max_element(v.begin(), v.end());
        while (!allDone)
        {

            int temp = maxEl;

            if (mp[maxEl] > 0)
            {   

                int x = temp;
                for (int i = 0; i < x; i++)
                {
                    if (mp[temp] > 0)
                    {
                        cout << temp << " ";
                        mp[temp]--;
                    }
                    temp--;
                }
            }

            else
                maxEl--;

            allDone = true;

            for (auto it : mp)
            {
                if (it.second > 0)
                {
                    allDone = false;
                    break;
                }
            }
        }

        cout << "\n";
    }

    return 0;
}