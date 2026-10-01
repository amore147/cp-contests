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
        char c;
        cin >> c;

        string s;
        cin >> s;

        if (c == 'g')
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 0;
        int count = 0;
        int idx = -1;

        s += s;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                idx = i;
                break;
            }
        }

        if (c == 'r')
        {
            for (int i = 0; i < s.length() / 2; i++)
            {
                if (s[i] == 'r')
                {
                    ans = max(ans, (idx - i) + 1);
                }
            }
        }

        else if (c == 'y')
        {
            for (int i = 0; i < s.length() / 2; i++)
            {
                if (s[i] == 'y')
                {
                    ans = max(ans, (idx - i) + 1);
                }
            }
        }

        cout << ans << '\n';
    }
}
