#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>v(n);
    for(auto &x :v) cin>>x;

    ll ans=LLONG_MAX;

    for(ll i=1;i<=n;i++){
        if(s[i]=='L' && s[i-1]=='R'){
                ll t=(v[i]-v[i-1])/2;
                ans=min(ans,t);
            }
    }

    if(ans==LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}
