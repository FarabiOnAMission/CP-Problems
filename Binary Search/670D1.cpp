#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool chc(vector<ll> &a,vector<ll> &b,ll m,ll k,ll n)
{
    for(ll i=0;i<n;i++)
    {
        ll c=max(0LL,a[i]*m-b[i]);
        k-=c;

        if(k<0)
            return false;
    }

    return true;
}


int main()
{
    ll n,k;
    cin>>n>>k;
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

    ll r=2e9;

    ll l=0;
    ll ans=0;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(chc(a,b,m,k,n))
        {
            ans=m;
            l=m+1;
        }
        else
            r=m-1;

    }

    cout<<ans<<endl;
}
