#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(ll i=0;i<n;i++)
    {
        ll j=i-1;
        ll x=v[i];
        while(j>=0 && v[j]>x)
        {
            v[j+1]=v[j];
            j--;
        }

        v[j+1]=x;

    for(ll k=0;k<n;k++)
    {
        cout<<v[k]<<' ';
    }
            cout<<endl;
    }
}
