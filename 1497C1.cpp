#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
      if(n%4==0)
        cout<<n/2<<' '<<n/4<<' '<<n/4<<endl;
      else
        cout<<(n/2 - 1)<<' '<<n/2 -1<<' '<<2<<endl;
    }
    else
      cout<<(n/2)<<' '<<n/2<<' '<<1<<endl;
    
  }
}