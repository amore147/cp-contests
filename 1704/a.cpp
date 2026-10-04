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
        int n , m;
        cin >> n >> m;
        string a , b;
        cin >> a >> b;


        bool check = true;
        for(int i = 1 ; i < m  ; i++){
            if(a[n - m + i] != b[i])
                check = false;
        }

        bool ok = false;

        for(int i = 0 ;i <= n - m ; i++){
            if(a[i] == b[0])
                ok = true;
        }

        if(ok && check)
            cout << "YES" << '\n';
        
        else
            cout << "NO" << '\n';


        }
    }

