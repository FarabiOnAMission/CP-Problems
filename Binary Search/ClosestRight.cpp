#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    cin>>k;
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
        ll l=0,r=n-1;
        ll la=-1,ra=-1;
        while(l<=r)
        {
        ll mid=l+(r-l)/2;
        if(v[mid]>=x)
            {
                la=mid;
                r=mid-1;
            }
        else
            l=mid+1;
        }

         l=0,r=n-1;

        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(v[mid]<=y)
            {
                ra=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }

       if (la != -1 && ra != -1 && la <= ra)
            cout << (ra - la + 1) <<endl;
        else
            cout <<0<<endl;
    }
}
