#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    ll l=0,r=0;
    ll c=0;
    ll sum=0;
    for(r=0;r<n;r++)
    {
     sum+=v[r];

     while(sum>=s)
     {
         sum-=v[l];
         l++;
     }

     c+=(r-l+1);
    }

    ll total=n*(n+1)/2;
    cout<<total - c<<endl;
}
