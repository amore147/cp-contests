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
        int n , k;
        cin >> n >> k;

        int ans = 0;

        int right = n;

        int temp = k;
        while(temp!= 1){
            ans += 2;
            right--;
            temp--;
        }
        
        ans += pow(2 , right);

        cout << ans << '\n';

    }

    return 0;
}