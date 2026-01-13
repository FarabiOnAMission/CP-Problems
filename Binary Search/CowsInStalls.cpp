#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool pos(vector<ll> &v,ll m,ll k)
{
    ll c=1;
    ll cowpos=v[0];
    for(ll i=1;i<v.size();i++)
    {
        if(v[i]-cowpos>=m)
        {
            c++;
            cowpos=v[i];
        }

        if(c>=k)
            return true;

    }

    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll l=1,r=v[n-1]-v[0];
    ll ans=0;
    while(l<=r)
    {
        ll m=l+(r-l)/2;

        if(pos(v,m,k))
        {
            ans=m;
            l=m+1;
        }
        else
            r=m-1;

    }

    cout<<ans<<endl;


}
