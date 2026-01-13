#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll a,b;
  cin>>a>>b;
  
  ll ans=1;
  for(ll i=a+1;i<=b;i++){
    if(i%10==0){
      cout<<0<<endl;
      return 0;
    }
    ans=(ans*(i%10))%10;
  }

  cout<<ans<<endl;
}