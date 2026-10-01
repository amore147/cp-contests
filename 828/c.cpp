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

        vector<int> indices;
        s += s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'g')
                indices.push_back(i);
        }

        int idx = 0;
        int ans = -1;

        if (c == 'r')
        {

            int i = 0;

            while (i != s.length())
            {
                if (s[i] == 'r')
                {
                    if (indices[idx] < i)
                    {
                        idx++;
                        continue;
                    }
                    else
                        ans = max(ans, indices[idx] - i);
                }

                i++;
            }
        }

        else if (c == 'y')
        {

            int i = 0;

            while (i != s.length())
            {
                if (s[i] == 'y')
                {
                    if (indices[idx] < i)
                    {
                        idx++;
                        continue;
                    }
                    else
                        ans = max(ans, indices[idx] - i);
                }

                i++;
            }
        }

        cout << ans << '\n';
    }
}
