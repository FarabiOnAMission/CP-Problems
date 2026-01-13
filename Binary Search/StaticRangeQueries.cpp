#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;
    cin>>n>>q;
    unordered_map<ll,vector<ll>>pos;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        pos[x].push_back(i);
    }

    while (q--) {
        ll l, r, x;
        cin >> l >> r >> x;

        vector<ll> &v = pos[x];

        ll lo = 0, hi = v.size();
        while (lo < hi) {
            ll m = (lo + hi) / 2;
            if (v[m] < l) lo = m + 1;
            else hi = m;
        }
        ll left = lo;

        lo = 0, hi = v.size();
        while (lo < hi) {
            ll m = (lo + hi) / 2;
            if (v[m] <= r) lo = m + 1;
            else hi = m;
        }
        ll right = lo;

        cout << right - left <<endl;
    }
}
