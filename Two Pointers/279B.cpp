#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,t;
    cin>>n>>t;

    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    ll l=0,r=0;
    ll ans=0;
    ll sum=0;
    for(r=0;r<n;r++)
    {
        sum+=v[r];
        if(sum>t)
        {
            sum-=v[l];
            l++;
        }
        ans=max(ans,r-l+1);
    }

    cout<<ans<<endl;

}
