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

        if (v.size() == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        vector<vector<int>> groups;
        int j = 0;

        while (j < n)
        {
            vector<int> temp;

            int start = j;

            while (j < n && v[j] == v[start])
            {
                temp.push_back(j + 1);
                j++;
            }


            groups.push_back(temp);
        }


        vector<int> result(n);

        bool check = true;
        int k = 1;
        for (int i = 0; i < groups.size(); i++)
        {

            int m = groups[i].size();
            int g = groups[i];
            if (m < 2)
            {
                check = false;
                break;
            }

            result[g[0] - 1] = g[m - 1];

            for(z = 1 ; z < m ; z++){
                result[g[f] - 1] = g[f - 1];
            }
    
        }

        if (!check)
        {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }

        cout << '\n';
    }
    return 0;
}