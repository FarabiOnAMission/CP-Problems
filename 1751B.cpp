#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s/k <b){
      cout<<-1<<endl;
      continue;
    }
    if(s/k ==b){
    for(ll i=0;i<n-1;i++)
    {
      cout<<0<<' ';
    }
    cout<<s<<endl;
  }
  else
  {
    if(k*(b+1)-1 + (n-1)*(k-1)<s)
      cout<<-1<<endl;
    else
      {
        ll x=k*(b+1)-1;
        s=s-x;
        cout<<x<<' ';
        for(ll i=0;i<n-1;i++){
          if(s-(k-1)>=0){
            cout<<k-1<<' ';
            s=s-(k-1);
          }
          else{
            cout<<s<<' ';
            s-=s;
          }
        }
        cout<<endl;
      }
  }
  }
}