#include <iostream>
#include <vector>
#include <climits>
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; ++i)
using namespace std;

ll n;

vector<vector<ll>> adj;
vector<vector<ll>> dp;

ll func(ll i, ll s){
    if(dp[i][s] != 0)
        return dp[i][s];
    
    if(__builtin_popcountll(s) == 2)
        return dp[i][s] = adj[0][i];
    
    ll res = LLONG_MAX;
    rep(msk, 1, n)
        if((s & (1LL << msk)) && msk != i)
            res = min(res, func(msk, s ^ (1LL << i)) + adj[msk][i]);
    return dp[i][s] = res;
}

int main(){
    freopen("test_cases_Q3.txt", "r", stdin);
    freopen("output_Q3.txt", "w", stdout);
    ll t; cin >> t;
    while(t--){
        cin >> n;
        dp.resize(n, vector<ll>(1LL << n));
        adj.resize(n, vector<ll>(n));
        rep(i, 0, n){
            rep(j, 0, n)
                cin >> adj[i][j];
        }
        ll ans = LLONG_MAX;
        rep(j, 1, n)
            ans = min(ans, func(j, (1LL << n) - 1) + adj[j][0]);
        cout << ans << endl;
    }
    return 0;
}
