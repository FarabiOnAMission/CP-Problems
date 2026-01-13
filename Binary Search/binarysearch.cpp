#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    while(k--)
    {
        ll x;
        cin>>x;
        ll l=0,r=n-1;
        bool f=false;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(v[mid]==x)
                {
                    f=true;
                    break;
                }
            else if(v[mid]<x)
                l=mid+1;
            else
                r=mid-1;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
