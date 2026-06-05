#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    map<ll,ll>freq;
    ll cnt2=0,cnt1=0,total=0;
    for(ll i=1;i<=n;i++){
      ll k;
      cin>>k;
      freq[i]=k;
      if(k>=2){
        cnt2++;
        total+=k;
      }
      else cnt1++;
    }

    if((total+cnt1)<3 || cnt2==0){
      cout<<0<<endl;
    }
    else{
      if(cnt2==1){
        cout<<total+min(cnt1,total/2)<<endl;
      }
      else{
        ll cap=0;
        for(auto x:freq){
          ll cnt=x.second;
          if(cnt>=2){
            cap+=(cnt/2 - 1);
          }
        }
        cout<<total+min(cnt1,cap)<<endl;
      }
    }
  }
}