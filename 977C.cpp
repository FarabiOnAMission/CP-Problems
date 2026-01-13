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

    ll a;
    if(k==0)
        a=v[0]-1;
    else
        a=v[k-1];

    ll c=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]<=a)
            c++;
    }

    if(c>k || a<1)
        cout<<-1<<endl;
    else
        cout<<a<<endl;
}
