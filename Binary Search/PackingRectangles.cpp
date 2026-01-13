#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll w,h,n;
    cin>>w>>h>>n;
    ll l=0,r=1;
    while(!(((r/w)*(r/h))>=n))
        r*=2;

    while(l<r)
    {
        ll m=l+(r-l)/2;
        ll k=(m/w)*(m/h);
        if(k>=n)
            r=m;
        else
            l=m+1;
    }

    cout<<l<<endl;
}
