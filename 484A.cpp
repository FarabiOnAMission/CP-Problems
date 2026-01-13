#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll l,r;
    cin>>l>>r;
    ll biggest=(1LL<<62)-1;
    while(biggest>r){
      biggest/=2;
    }

    cout<<biggest<<endl;
  }
}