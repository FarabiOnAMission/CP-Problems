#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i=0;i<a.size();i++) cin>>a[i];
    for(ll j=0;j<b.size();j++) cin>>b[j];

    ll ans=0;
    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            ll temp=a[i];
            ll a1=0;
            ll b1=0;
            while(i<n && a[i]==temp)
            {
                a1++;
                i++;
            }
            while(j<m && b[j]==temp)
            {
                b1++;
                j++;
            }

            ans+=a1*b1;
        }
    }

    cout<<ans<<endl;

}
