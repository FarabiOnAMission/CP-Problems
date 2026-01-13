#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n+2,0); // 1-based indexing, pad v[n+1]=0
        for(ll i=1;i<=n;i++) cin >> v[i];

        // dp[i][prev][curr]: minimal cost up to i with prev/curr zero/non-zero
        vector<vector<ll>> dp(4, vector<ll>(2, INF)); // compress: dp[prev*2 + curr]
        dp[0*2+0] = 0; // first element zero
        dp[0*2+1] = v[1]; // first element non-zero

        for(ll i=2;i<=n;i++){
            vector<vector<ll>> newdp(4, vector<ll>(2, INF));
            for(int prev=0; prev<=1; prev++){
                for(int curr=0; curr<=1; curr++){
                    ll cost = dp[prev*2+curr];
                    if(cost==INF) continue;

                    // option 1: next element = 0
                    newdp[curr*2+0] = min(newdp[curr*2+0], cost + v[i]);

                    // option 2: next element non-zero
                    ll required = 0;
                    if(prev && curr) required = v[i-1] + v[i+1]; // placeholder, see below
                    else required = v[i]; // approximation
                    newdp[curr*2+1] = min(newdp[curr*2+1], cost + abs(v[i] - required));
                }
            }
            dp = newdp;
        }

        ll ans = INF;
        for(int prev=0; prev<=1; prev++)
            for(int curr=0; curr<=1; curr++)
                ans = min(ans, dp[prev*2+curr]);

        cout << ans << "\n";
    }
}
