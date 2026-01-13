#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n;
vector<ll>v;
const ll mod=1e9+7;

ll fib(ll x){
  if(x==0){
    v[0]=0;
    return v[0];
  }

  if(x==1){
    v[1]=1;
    return v[1];
  }

  //if(v[x]!=-1) return v[x];
  return v[x]=(fib(x-1)+fib(x-2))%mod;

}

int main(){
  cin>>n;
  v.resize(n+1,-1);
  cout<<fib(n)<<endl;

}