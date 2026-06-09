#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(n%2==1 && n<27){
      cout<<-1;
    }
    else if(n%2==1){
      // 1D 2D 3D 4D 5D 6D 7D 8D 9D 10D 11D 12D 13D 14D 15D 16D 17D 18D 19D 20D 21D 22D 23D 24D 25D 26D 27D 
      ll cnt=3;
      for(ll i=1;i<=27;i++){
        if(i==1 || i==10 || i==26) cout<<1<<' ';
        else if(i==11 || i==27) cout<<2<<' ';
        else{
          cout<<cnt<<' '<<cnt++<<' ';
          i++;
        }
      }
      for(ll i=27;i<n;i+=2){
        cout<<cnt<<' '<<cnt++<<' ';
      }
    }
    else{
      ll cnt=1;
      for(ll i=1;i<=n;i+=2){
        cout<<cnt<<' '<<cnt++<<' ';
      }
    }
    cout<<endl;
  }
}