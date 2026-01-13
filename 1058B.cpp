#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,d;
  cin>>n>>d;
  ll m;
  cin>>m;
  while(m--){
    ll x,y;
    cin>>x>>y;
    ll z=x+y;
    ll z2=y-x;
    if(z>=d && z<=2*n-d){
      if(z2>=-d && z2<=d){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else cout<<"NO"<<endl;
  }
}
