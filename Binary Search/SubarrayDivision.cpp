#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool p(const vector<ll> &v,ll k,ll msum)
{
    ll scount=0;
    ll csum=0;

    for(ll i=0;i<v.size();i++)
    {
        if(v[i] + csum >msum)
        {
            scount++;
            csum=0;
        }
        csum+=v[i];
    }

    if(csum>0)
        scount++;

    return scount<=k;

}

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);

    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll l=*max_element(v.begin(),v.end());
    ll r=accumulate(v.begin(),v.end(),0LL);

    while(l<r)
    {
        ll m=l+(r-l)/2;
        if(p(v,k,m))
        {
            r=m;
        }
        else
            l=m+1;
    }

    cout<<r<<endl;
}
