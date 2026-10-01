#include <bits/stdc++.h>
using namespace  std;

#define int long long

signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;

    while(t--){

        int n , q;
        cin >> n >> q;
        vector <int> v(n);

        int e = 0;
        int o = 0;
        int sum = 0;

        for(auto & x : v) {
            cin >> x;
            if(x & 1) o++;
            else e++;

            sum += x;
        }

        vector <pair<int , int>> que(q);


        for(int i = 0 ; i < que.size(); i++){
            int a , b;
            cin >> a >> b;

            que[i] = {a , b};
        }

        for(int i = 0 ; i < que.size(); i++){
            int val = que[i].second;
            int type = que[i].first;

            if(type == 0){
                sum += e * val;

                if(val & 1){
                    o += e;
                    e = 0;
                }
            }

            else if(type == 1){
                sum += o * val;

                if(val & 1){
                    e += o;
                    o = 0;
                }
            }

            cout << sum << '\n';
        
        }
        
    }
    
}