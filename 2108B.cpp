#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    if(x==0 && n==1){
      cout<<-1<<endl;
      continue;
    }
    ll c = __builtin_popcountll(x);
    ll k=n-c;
    if(n<=c) cout<<x<<endl;
    else{
      if(k%2==0){
        cout<<x+k<<endl;
      }
      else{
        if(x==0 || x==1){
          cout<<n+3<<endl;
        }
        else{
          cout<<x+k+1<<endl;
        }
      }
    }
  }
}