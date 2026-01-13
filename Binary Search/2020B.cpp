#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using ld=long double;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l=0,r=4e18;
        ll ans=0;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            ll k=m-(ll)sqrt(ld(m));
            if(k>=n)
            {
                r=m-1;
                ans=m;
            }
            else
                l=m+1;

        }

        cout<<ans<<endl;
    }
}
