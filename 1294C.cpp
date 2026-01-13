#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll m1=LLONG_MAX;
    ll m2=LLONG_MAX;
    for(ll i=2;i*i<=n;i++){
      if(n%i==0){
        m1=min(m1,i);
      }
    }
    for(ll i=2;i*i<=n;i++){
      if(n%i==0 && i>m1){
        m2=min(m2,i);
      }
    }
    if(n%(m1*m2)==0){
      ll a=n/(m1*m2);
      if(a>1 && a!=m1 && a!=m2)
        cout<<"YES"<<endl;
        cout<<m1<<' '<<m2<<' '<<a<<endl;
        continue;
    }

    cout<<"NO"<<endl;
  }
}