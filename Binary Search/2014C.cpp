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
        vector<ll>v(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        sort(v.begin(),v.end());

        if(n<=2)
        {
            cout<<-1<<endl;
            continue;
        }

        ll l=0,r=1e12;
        ll ans=0;
        ld avg=(sum)/2*n;
        ld g=(v[n/2]);
        while(l<r)
        {
            ll m=l+(r-l)/2;
            avg=ld(sum+m)/(2*n);


            if(avg>g)
            {
                ans=m;
                r=m;
            }
            else
                l=m+1;

        }

        cout<<ans<<endl;
    }
}
