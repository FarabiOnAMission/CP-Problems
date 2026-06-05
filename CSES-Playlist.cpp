// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
	ll n;
    cin>>n;
    vector<ll>k(n);
    for(ll i=0;i<n;i++) cin>>k[i];
    set<ll>s;
    ll r=-1,ans=-1;
    for(ll i=0;i<n;i++){
        while(r<n-1 && !s.count(k[r+1])) s.insert(k[++r]);
        ans=max(ans,r-i+1);
        s.erase(k[i]);
    }

    cout<<ans<<endl;
}
