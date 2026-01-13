#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll ask(ll type,ll l,ll r){
  cout<<type<<' '<<l<<' '<<r<<endl;

  ll answer;
  cin>>answer;

  if(answer==-1){
    exit(0);
  }
  return answer;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    ll origsum=ask(1,1,n);
    ll dummysum=ask(2,1,n);
    ll len=dummysum-origsum;

    ll lo=1;
    ll hi=n;
    ll ans=n;

    while(lo<=hi){

      ll mid=lo+(hi-lo)/2;
      ll sumorig=ask(1,1,mid);
      ll sumdummy=ask(2,1,mid);
      ll diff=sumdummy-sumorig;

      if(diff==len){
        ans=mid;
        hi=mid-1;
      }
      else lo=mid+1;
    }

    ll l=ans-len+1;

    cout<<"!"<<' '<<l<<' '<<ans<<endl;
  }
}