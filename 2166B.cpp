#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n,a,b;
    cin>>a>>b>>n;
    if(a<b*n && a!=b){
      cout<<2<<endl;
    }
    else cout<<1<<endl;
  }
}