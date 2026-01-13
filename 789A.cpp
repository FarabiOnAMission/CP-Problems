#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll p=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        p+=(v[i]+k-1)/k;
    }

    cout<<(p+1)/2<<endl;
}
