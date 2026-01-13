#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>a(n),b(n),diff(n);
  ll suma=0,sumb=0,sum=0;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    suma+=a,sumb+=b,sum+=a;
    diff[i]=a-b;
  }

  if(sumb>m){
    cout<<-1<<endl;
    return 0;
  }
  if(suma<m){
    cout<<0<<endl;
    return 0;
  }
  sort(diff.rbegin(),diff.rend());
  ll c=0;
  for(ll i=0;i<n;i++){
    if(sum<=m) break;
    
    sum=sum-(diff[i]);
    c++;
  }

  cout<<c<<endl;
}