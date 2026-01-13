#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll fact(ll x){
  if(x==1) return 1;
  else return x*fact(x-1);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll a,b;
  cin>>a>>b;
  ll m=min(a,b);

  cout<<fact(m)<<endl;
}