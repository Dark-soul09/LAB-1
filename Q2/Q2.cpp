#include <iostream>
#include <vector>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; ++i)
typedef long long ll;

int main(){
    freopen("test_cases_Q2.txt", "r", stdin);
    freopen("output_Q2.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        int n, max_weight; cin >> n >> max_weight;
        vector<ll> weights(n), values(n);
        
        rep(i, 0, n) cin >> weights[i];
        rep(i, 0, n) cin >> values[i];
        
        vector<ll> dp(max_weight + 1);
        
        rep(i, 0, n)
            for(int j = max_weight; j >= 0; j--)
                if(j >= weights[i])
                    dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        
        ll ans = 0;
        for(auto x: dp)
            ans = max(ans, x);
        
        cout << ans << endl;
    }

    return 0;
}
