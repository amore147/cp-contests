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
        int n, x;
        cin >> n >> x;

        vector<int> v(n);

        for (auto &x : v)
            cin >> x;

        int l = v[0] - x;
        int r = v[0] + x;

        int count = 0;

        for (int i = 1; i < v.size(); i++)
        {
            l = max(v[i] - x, l);
            r = min(v[i] + x, r);

            if (l > r)
            {
                count++;
                l = v[i] - x;
                r = v[i] + x;
            }
        }

        cout << count << '\n';
    }
}