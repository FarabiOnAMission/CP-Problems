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

    while(k--)
    {
        ll x;
        cin>>x;
        ll l=1,r=n;
        ll ans=0;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(v[mid]<=x)
               {
                   ans=mid;
                   l=mid+1;
               }
            else
                r=mid-1;
        }

        cout<<ans<<endl;
    }
}
