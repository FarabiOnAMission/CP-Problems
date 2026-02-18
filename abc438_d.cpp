#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    vector<ll>a(n),b(n),c(n),pa(n+1,0),pb(n+1,0),pc(n+1,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) cin>>c[i];
    
    for(ll i=1;i<=n;i++) pa[i]=pa[i-1] + a[i-1];
    for(ll i=1;i<=n;i++) pb[i]=pb[i-1] + b[i-1];
    for(ll i=1;i<=n;i++) pc[i]=pc[i-1] + c[i-1];
    ll maxx=LLONG_MIN,maxy=LLONG_MIN,ans=LLONG_MIN;
    for(ll i=2;i<n;i++){
      maxx=max(maxx,pa[i-1]-pb[i-1]);
      maxy=pb[i]-pc[i];
      ans=max(ans,maxx+maxy);
    }
    cout<<ans+pc[n]<<endl;
}