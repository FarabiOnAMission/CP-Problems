#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    if(n%2==1){
      cout<<l<<endl;
    }
    else{
    if(n<=2){
      cout<<-1<<endl;
    }
    else{
      unsigned long long y=  1LL<< (63 - __builtin_clzll(l) + 1);
      if(y>r){
        cout<<-1<<endl;
      }
      else{
        if(k<=n-2){
          cout<<l<<endl;
        }
        else{
          cout<<y<<endl;
        }
      }
    }
    }
  }
}