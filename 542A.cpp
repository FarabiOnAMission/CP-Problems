#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>a(n);
  ll c=0;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    c+=a[i];
  }
  sort(a.begin(),a.end());
  ll mn,mx;
  mx=a[n-1]+m;
  c+=m;
  ll d=(c+n-1)/n;
  cout<<max(a[n-1],d)<<' '<<mx<<endl;
}