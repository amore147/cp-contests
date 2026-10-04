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

        for (auto &x : v)
            cin >> x;

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int num = v[i] + v[i + 1];

            if (num & 1)
                count++;
        }

        cout << count << '\n';
    }
}