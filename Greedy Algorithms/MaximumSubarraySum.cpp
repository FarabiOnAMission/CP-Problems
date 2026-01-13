#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>prefsum(n+1,0);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll ans=v[0];
    ll m=LLONG_MAX;
    for(ll i=1;i<=n;i++)
    {
        prefsum[i]=prefsum[i-1]+v[i-1];
    }

    for(ll i=0;i<n;i++)
    {
        m=min(m,prefsum[i]);
        ans=max(prefsum[i+1]-m,ans);
    }

    cout<<ans<<endl;


}
