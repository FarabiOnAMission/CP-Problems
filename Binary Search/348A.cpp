#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll s=0;
    ll mx=0;

    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
        mx=max(mx,v[i]);
    }

     ll l=*max_element(v.begin(),v.end());
     ll r=1e14;
     ll ans=0;
     while(l<=r)
     {
         ll m=l+(r-l)/2;
         if(m>=((s+n-2)/(n-1)))
         {
             ans=m;
             r=m-1;
         }
         else
            l=m+1;
     }

     cout<<ans<<endl;


}
