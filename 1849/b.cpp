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

        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (auto &x : v)
            cin >> x;

        vector<pair<int, int>> pairs(n);

        for (int i = 0; i < v.size(); i++)
        {
            int a = v[i] % k == 0 ? k : v[i] % i;
            pairs[i] = {a, i + 1};
        }

        sort(pairs.begin(), pairs.end(), [](pair<int, int> &a, pair<int, int> &b)
             {
            if(a.first == b.first)
                return a.second < b.second;

            return a.first > b.first; });

        for (int i = 0; i < pairs.size(); i++)
        {
            cout << pairs[i].second << " ";
        }

        cout << '\n';
    }
}
