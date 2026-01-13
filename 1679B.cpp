#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1,0);
    vector<pair<ll,ll>>localvar(n+1);
    pair<ll,ll>globalvar={0,0};
    ll sum=0;
    for(ll i=1;i<=n;i++) {
      cin>>v[i];
      sum+=v[i];
      localvar[i].first=v[i];
      localvar[i].second=0;
    }

    for(ll i=1;i<=q;i++){
      ll a,b,x;
      cin>>a>>b;
      if(a==1){ 
        cin>>x;
        ll old;
        if(localvar[b].second<globalvar.second){
          old=globalvar.first;
        }
        else{
          old=localvar[b].first;
        }

        sum=sum+x-old;
        localvar[b]={x,i};;
      }
      else{
        sum=n*b;
        globalvar.first=b;
        globalvar.second=i;
      }

      cout<<sum<<endl;
    }
  }
