#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,r,b;
    cin>>n>>r>>b;

    ll x=r/(b+1);
    ll rem=r%(b+1);
    for(ll i=0;i<b+1;i++){
      for(ll i=0;i<x;i++)
        cout<<'R';
      
        if(rem>0){
          cout<<'R';
          rem--;
        }
        if(i<b)
            cout<<'B';
    }
    cout<<endl;

  }
}