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
    for(ll i=0;i<n;i++) cin>>v[i];

    ll mn=1,mx=n;
    ll l=0,r=n-1;
    while(l<r){

      if(v[l]==mn){
        l++;
        mn++;
      }
      else if(v[l]==mx){
        l++;
        mx--;
      }
      else if(v[r]==mn){
        r--;
        mn++;
      }
      else if(v[r]==mx){
        r--;
        mx--;
      }
      else
        break;
    }

    if(l!=r){
      cout<<l+1<<' '<<r+1<<endl;
    }
    else cout<<-1<<endl;
  }
}