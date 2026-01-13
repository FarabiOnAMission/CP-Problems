#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,h,a,b,q;
  cin>>n>>h>>a>>b>>q;
  while(q--){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
      cout<<abs(y1-y2)<<endl;
      continue;
    }

    ll ans=0;

    if(y1<a){
      ans+=abs(y1-a);
      y1=a;
    }
    else if(y1>b){
      ans+=abs(y1-b);
      y1=b;
    }
    ans+=abs(y1-y2);
    ans+=abs(x1-x2);

    cout<<ans<<endl;
  }
}