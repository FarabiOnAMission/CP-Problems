#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);

    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v[i]={x,y};
    }

    sort(v.begin(), v.end());
    ll t=0;
    ll b=0;
    for(ll i=0;i<n;i++)
    {
        t+=v[i].first;
        b+=(v[i].second-t);

    }

    cout<<b<<endl;

}
