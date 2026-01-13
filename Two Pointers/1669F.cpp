#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];

        ll l=0,r=n-1;
        ll alice=0,bob=0;
        ll ans=0;
        while(l<=r)
        {
            if(alice<=bob)
            {
                alice+=v[l];
                l++;
            }
            else if(alice>bob)
            {
                bob+=v[r];
                r--;
            }

            if(alice==bob)
            {
                ans=max(ans,l+(n-r-1));
            }
        }

        cout<<ans<<endl;
    }
}
