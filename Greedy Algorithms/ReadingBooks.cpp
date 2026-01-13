#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>v(n);
    ll mx=0;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
        sum+=v[i];
    }

    sum=sum-mx;

    if(sum<=mx)
        cout<<2*mx<<endl;
    else
        cout<<sum+mx<<endl;

}

