#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    ll lsum=0,rsum=0;
    ll l=0,r=n-1;
    ll ans=0;
    while(l<=r)
    {
        if(lsum<=rsum)
        {
            lsum+=a[l];
            l++;
        }
        else
        {
                rsum+=a[r];
                r--;
        }

        if(lsum==rsum)
        {
            ans=max(ans,lsum);
        }
    }

    cout<<ans<<endl;
}
