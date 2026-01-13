#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    ll c=0;
    ll k=0;
    for(ll i=1;i<=n;i++){
    if(i%2==1){
      cout<<2*c+1<<' ';
    }
    else cout<<(2*c+1)*2<<' ';
    
    if(i%2==0) c++;
  }
    cout<<endl;
  }
}