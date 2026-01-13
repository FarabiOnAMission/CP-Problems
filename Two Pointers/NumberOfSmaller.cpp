#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    vector<ll>c(m);
    for(ll i=0;i<a.size();i++) cin>>a[i];
    for(ll j=0;j<b.size();j++) cin>>b[j];

    ll i=0;
    for(ll j=0;j<m;j++)
    {
        while(i<n && a[i]<b[j])
        {
            i++;
        }

        c[j]=i;
    }

    for(ll x=0;x<m;x++)
        cout<<c[x]<<' ';

    cout<<endl;
}
