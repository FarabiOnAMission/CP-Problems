#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    ll l=0,r=n-1;
    ll c=0;
    while(l<=r)
    {
        if(v[l]+v[r]<=x)
        {
            l++;
            r--;
        }
        else
        {
            r--;
        }
        c++;

    }

    cout<<c<<endl;
}
