#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  ll r=0,ans=n;
  for(ll l=0;l<n;l++){
    while(r<n && 2*a[l]>=a[r]){
      r++;
    }

    ans=min(ans,n-(r-l));
  }

  cout<<ans<<endl;
}