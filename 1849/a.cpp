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

        int a  , b, c;
        cin >> a >> b >> c;

        int ans = 3;
        b--;
        for(int i = 0 ; i < a - 2 ; i++){
            if(b == 0 && c == 0) break;

            if(b != 0) b--;
            else if(c != 0) c--;

            ans += 2;
        }

        cout <<  ans << '\n';

    }
}
 