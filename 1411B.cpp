#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool fair(ll x){
  ll g=x;
  while(g>0){
    ll d=g%10;
    if(d!=0 && x%d!=0)
      return false;
    g/=10;
  }
  return true;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    while(!fair(n))
      n++;

    cout<<n<<endl;
    }
  }