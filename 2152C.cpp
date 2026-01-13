#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    vector<ll>prefone(n+1,0);
    vector<ll>prefzero(n+1,0);

    for(ll i=1;i<=n;i++){
      prefone[i]=prefone[i-1] + (v[i-1]== 1 ? 1: 0 );
      prefzero[i]=prefzero[i-1] + (v[i-1]== 0 ? 1: 0 );
    }

    vector<ll>pashapashi(n+1,0);
    for(ll i=1;i<n;i++){
      pashapashi[i]= pashapashi[i-1];
      if(v[i]==v[i-1]){
        pashapashi[i]++;
      }
    }
      pashapashi[n]=pashapashi[n-1];

      while(q--){
        ll l,r;
        cin>>l>>r;
        
        ll ones=prefone[r]-prefone[l-1];
        ll zeros=prefzero[r]-prefzero[l-1];

        if(ones%3!=0 || zeros%3!=0)
        {
          cout<<-1<<endl;
        }
        else{
          ll length=r-l+1;
          ll otherlength=length/3;

          if(l<r && pashapashi[r-1]-pashapashi[l-1]>0)
            cout<<otherlength<<endl;
          else cout<<otherlength+1<<endl;
        }
      }
    
  }
}