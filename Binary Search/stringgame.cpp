#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    string a,b;
    cin>>a>>b;
    ll n=a.size();
    vector<ll>d(n);
    for(ll i=0;i<n;i++)
    {
        cin>>d[i];
    }

    ll l=0,r=n;
    ll ans=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;

        vector<ll>k(n,1);
        ll f=0;
        for(ll i=0;i<mid;i++)
        {
            k[d[i]-1]=0;
        }

        for(ll i=0;i<n;i++)
        {
            if(k[i] && a[i]==b[f])
                f++;
            
            if(f==b.size())
              break;
        }

        if(f==b.size())
            {   
                ans=mid;
                l=mid+1;
            }
        else
            r=mid-1;

    }

    cout<<ans<<endl;
}