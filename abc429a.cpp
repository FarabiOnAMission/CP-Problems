#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  for(ll i=01;i<=n;i++){
    if(i<=m) cout<<"OK"<<endl;
    else cout<<"Too Many Requests"<<endl;
  }
}