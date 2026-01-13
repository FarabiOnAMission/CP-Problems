#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool ok(vector<ll>&d,vector<ll> &c,ll h,ll t)
{
    ll dam=0;
    for(ll i=0;i<d.size();i++)
    {
        ll x=(t+c[i]-1)/c[i];
        dam+=x*d[i];

        if(dam>=h)
            return true;
    }

    return dam>=h;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll h,n;
        cin>>h>>n;
        vector<ll>a(n);
        vector<ll>b(n);

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll l=1,r=1;
        while(!ok(a,b,h,r))
            r*=2;

        ll ans=0;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            if(ok(a,b,h,m))
            {
                ans=m;
                r=m-1;
            }
            else
                l=m+1;
        }

        cout<<ans<<endl;
    }
}
