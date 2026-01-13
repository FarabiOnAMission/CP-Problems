#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[i]=x;
    }

    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        mp[x+1]+=mp[x]-y;
        mp[x-1]+=y-1;
        mp[x]=0;
    }

    for(ll i=1;i<=n;i++)
        cout<<mp[i]<<endl;
}
