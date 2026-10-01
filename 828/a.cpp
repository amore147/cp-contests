#include <bits/stdc++.h>
#define int long long
using namespace std;

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

        string s;
        cin >> s;

        unordered_map<int, char> mp;
        for (int i = 0; i < v.size(); i++)
        {
            char value = s[i];
            int key = v[i];
            mp[key] = value;
        }
        vector < pair<int, char> seen;

        for (int i = 0; i < v.size(); i++)
        {
            seen.push_back({v[i], s[i]});
        }

        bool check = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (mp.find(seen[i].first) != mp.end())
            {
                if (seen[i].second != mp[seen[i].first])
                {
                    check = false;
                    break;
                }
            }
        }

        if (!check)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
