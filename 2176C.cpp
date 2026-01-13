#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n),odd,even;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]%2) odd.push_back(v[i]);
      else even.push_back(v[i]);
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    ll cntodd,cnteven;

    vector<ll>prefeven(even.size()+1,0);
    for(ll i=1;i<=even.size();i++){
      prefeven[i]=prefeven[i-1]+even[i-1];
    }

    for(ll k=1;k<=n;k++){
      ll x=even.size();
      cnteven=min(x,k-1);
      cntodd=k-cnteven;
      if(cntodd%2==0){
        cnteven--;
        cntodd++;
      }

      if(cntodd>odd.size() || cnteven<0){
        cout<<0<<' ';
      }
      else{
        cout<<odd[0]+prefeven[cnteven]<<' ';
      }
    }
    cout<<endl;
  }
}