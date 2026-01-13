#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    vector<ll>prefsum(n+1,0);

    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=1;i<=n;i++)
    {
        prefsum[i]=prefsum[i-1]+a[i-1];
    }

    ll r=0;
    for (ll l = 1; l <= n && r < m; l++) {
        while (r < m && b[r] <= prefsum[l])
        {
            cout<<l<<' '<<b[r]-prefsum[l-1]<<endl;
            r++;
        }
    }

}
