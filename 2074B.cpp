#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }

        cout<<sum-(n-1)<<endl;
    }
}
