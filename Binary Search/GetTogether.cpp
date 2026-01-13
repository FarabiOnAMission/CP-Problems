#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using ld=long double;

int main()
{
    ll n;
    cin>>n;
    vector<ll>x(n),v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>x[i]>>v[i];
    }

    ld l=0,r=1e18;

    while(r-l>1e-9)
    {
        ld L=-1e18,R=1e18;
        ld m=l+(r-l)/2;
        for(ll i=0;i<n;i++)
        {
            ld lo=x[i]-v[i]*m;
            ld ro=x[i]+v[i]*m;
            L=max(L,lo);
            R=min(R,ro);
            
        }

        if(L<=R)
            r=m;
        else
            l=m;
    }

    cout<<fixed<<setprecision(10)<<r<<endl;
}