#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll l,w;
    cin>>l>>w;
    ll x;
    cin>>x;
    ll currx,curry,reachx,reachy;
    cin>>currx>>curry>>reachx>>reachy;
    ll d1=abs(reachx-currx);
    ll d2=abs(reachy-curry);

    ll ansup=0,ansdown=0;

    bool okx=(d1 % x == 0) || (reachx % x == 0) || ((l - reachx) % x == 0);
    bool oky=(d2 % x == 0) || (reachy % x == 0) || ((w - reachy) % x == 0);

    if(!okx || !oky){
      cout<<-1<<endl;
      continue;
    }

    if(d1%x==0 && d2%x==0){
      cout<<0<<endl;
    }
    else if(d1%x!=0 && d2%x==0){
      cout<<1<<endl;
    }
    else if(d1%x==0 && d2%x!=0){
      cout<<1<<endl;
    }
    else{
      cout<<2<<endl;
    }

  }
}