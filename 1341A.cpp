#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    ll x=a-b;
    ll y=a+b;
    ll lo=c-d;
    ll hi=c+d;
    if(y*n>=lo && x*n<=hi){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }

  }
}