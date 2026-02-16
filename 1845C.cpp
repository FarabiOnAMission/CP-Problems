#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s,l,r;
    ll m;
    cin>>s>>m>>l>>r;
    vector<ll>pos[10];
    for(ll i=0;i<s.size();i++){
      pos[s[i]-'0'].push_back(i);
    }

    ll curr=-1;
    bool f=false;
    for(ll i=0;i<m;i++){
      ll left=l[i]-'0';
      ll right=r[i]-'0';
      ll mpos=-1;
      for(ll j=left;j<=right;j++){
        auto it=upper_bound(pos[j].begin(),pos[j].end(),curr);
        if(it==pos[j].end()){
          f=true;
          break;
        }
        mpos=max(mpos,*it);
      }
      curr=mpos;
      if(f){
        cout<<"YES"<<endl;
        break;
      }
    }

    if(!f){
    cout<<"NO"<<endl;
    }
  }
}