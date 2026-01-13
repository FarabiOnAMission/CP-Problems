#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1,0);

    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll l=0,r=1e18;
    ll t=(n+1)/2;
    ll ans=0;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        ll s=0;
        bool ok=true;
        for(ll i=t;i<=n;i++)
        {
            ll n=max(0LL,m-v[i]);

            if(s>k-n)
        {
            ok=false;
            break;
        }
        s+=n;
        }

        if(ok)
        {
            l=m+1;
            ans=m;
        }
        else
            r=m-1;
    }

    cout<<ans<<endl;

}
