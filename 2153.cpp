#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n;
  cin>>n;
  vector<ll>v(n);
  vector<ll>lside;
  map<ll,ll>freq;
  ll sum=0;
  for(ll i=0;i<n;i++){
    cin>>v[i];
    freq[v[i]]++;
    sum+=v[i];
  }

  vector<pair<ll,ll>>grp;
  
  for(auto p:freq){
    grp.push_back({p.first,p.second});
  }

  sort(grp.rbegin(),grp.rend());


  for(ll i=0;i<grp.size();i++){
    ll cand=grp[i].first;
    ll cnt=grp[i].second;

    if(cnt%2==1){
      lside.push_back(cand);
    }
  }

  sort(lside.begin(),lside.end());
  ll mm=lside.size();
  ll cand_sum=0;
  if(mm>2){
    for(ll i=0;i<mm-2;i++){
      cand_sum+=lside[i];
    }
  }
  ll p=sum,cur=n,idx=0,ans=0;

  while(true){
    ll S=p-cand_sum;
    ll i=((idx<grp.size())?grp[idx].first:0);
    ll track=(mm>2?mm-2:0);
    ll k=cur-track;

    if(k>=3 && S>2*i){
      ans=S;
      break;
    }
    if(idx>=grp.size()) break;

    ll l=grp[idx].first;
    ll cnt=grp[idx].second;
    p-=l*cnt;
    cur-=cnt;

    if(cnt%2==1){
      if(mm>3)
        cand_sum-=lside[mm-3];
      else
        cand_sum=0;
      
      lside.pop_back();
      mm--;
    }
    idx++;
  }
  cout<<ans<<endl;
  }
  }
