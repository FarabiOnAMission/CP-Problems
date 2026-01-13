#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);

    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    double l=0,r=1e8;

    cout<<setprecision(20);
    for(ll i=0;i<=100;i++)
    {
        double mid=l+(r-l)/2;
        ll s=0;
        for(ll j=0;j<n;j++)
        {
            s+=floor(v[j]/mid);
        }

        if(s>=k)
            l=mid;
        else
            r=mid;
    }

    cout<<l<<endl;
}
