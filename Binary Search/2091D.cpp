#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool ok(ll n,ll m,ll k,ll c)
{
    ll g=m/(c+1);
    ll rem=m%(c+1);
    ll total=g*c + rem;

    return n*total >=k;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll l=0,r=m;
        ll ans=0;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(ok(n,m,k,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<ans<<endl;
    }
}
