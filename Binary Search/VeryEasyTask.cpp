#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    if(n==1)
    {
        cout<<min(x,y)<<endl;
        return 0;
    }

    ll m1=min(x,y);
    ll m2=max(x,y);


    ll l=0,r=1e18;
    ll f=min(x,y);
    n--;
    ll ans=0;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        ll c=(m/x)+(m/y);
        if(c>=n)
        {
            ans=m;
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }

    cout<<ans+f<<endl;


}
