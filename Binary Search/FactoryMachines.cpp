#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=1e18;
    ll ans=0;
    while(l<=r)
    {
        ll s=0;
        ll m=l+(r-l)/2;

        for(ll i=0;i<n;i++)
        {
            s+=m/v[i];

            if(s>=t)
                break;
        }

        if(s>=t)
            {
                ans=m;
                r=m-1;
            }
        else
            {
                l=m+1;
            }
    }

    cout<<ans<<endl;
}