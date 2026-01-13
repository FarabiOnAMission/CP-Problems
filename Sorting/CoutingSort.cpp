#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(101,0);
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v[x]++;
    }

    for(ll i=0;i<=100;i++)
    {
        while(v[i]>0)
        {
            cout<<i<<' ';
            v[i]--;
        }
    }

    cout<<endl;

}
