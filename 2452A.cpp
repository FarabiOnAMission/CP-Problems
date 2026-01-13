#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    cin>>t;
    while(t--) {
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;

        ll lo=0, hi=2*n;
        while (lo<hi) {
            ll mid=(lo+hi)/2;

            vector<pair<ll,ll>> pts ={
                {min(max(a+mid,0LL),n), b},
                {min(max(a-mid,0LL),n), b},
                {a, min(max(b+mid,0LL),n)},
                {a, min(max(b-mid,0LL),n)}
            };

            ll worst_case=0;
            for (auto [x,y]:pts) {
                worst_case = max(worst_case, max(abs(x-c), abs(y-d)));
            }

            if (worst_case <= mid) hi = mid;
            else lo = mid+1;
        }
        cout<<lo<<endl;
    }
}