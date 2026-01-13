#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<bool>op1(n),op2(n);
    vector<ll>ans(n);
    while(q--){
      ll c,l,r;
      cin>>c>>l>>r;
      if(c==1){
        for(ll i=l-1;i<r;i++)
          op1[i]=true; 
      }
      else if(c==2){
        for(ll i=l-1;i<r;i++)
          op2[i]=true;
      }
      }

      for(ll i=0;i<n;i++){
        if(op1[i] && op2[i]){
          ans[i]=1e3;
        }
        else if(op1[i]){
          ans[i]=k;
        }
        else{
          ans[i]=i%k;
        }
      }

      for(ll i=0;i<n;i++)
        cout<<ans[i]<<' ';
      
      cout<<endl;
      }
    }