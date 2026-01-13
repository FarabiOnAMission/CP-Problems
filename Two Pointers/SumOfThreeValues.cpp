#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>v(n);

    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
    }

    sort(v.begin(),v.end());
    ll l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]<x)
            l++;
        else if(v[l]+v[r]>x)
            r--;
        else
        {
            cout<<l+1<<' '<<r+1<<endl;
            return 0;
        }
    }
}
