#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll>psum(n,0);

    for(ll i=1;i<n;i++)
    {
        psum[i]=psum[i-1];
        if(s[i]==s[i-1])
            psum[i]++;
    }

    ll t;
    cin>>t;
    while(t--)
    {
    ll l,r;
    cin>>l>>r;

    cout<<psum[r-1]-psum[l-1]<<endl;
    }
}
