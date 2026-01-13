#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    ll c1=0;
    ll c0=0;
    ll n=s.size();
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
            c1++;
        else
            c0++;
    }

    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1' && c0>0)
        {
            ans++;
            c0--;
        }
        else if(s[i]=='0' && c1>0)
        {
            ans++;
            c1--;
        }
        else
            break;
    }

    cout<<n-ans<<endl;
}
}
