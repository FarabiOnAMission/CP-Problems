#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll d,n;
    // cin>>d>>n BALER CP cd
    cin>>n>>d;
    vector<ll>a(n+1),b(n+1),stock(n+1);
    deque<pair<ll,ll>>dq;
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>b[i];

    for(ll i=1;i<=n;i++){
      dq.push_back({i,a[i]});
      ll eat = b[i];
      ll has = dq.front().second;
      
      while(eat>0 && !dq.empty()){
        ll has=dq.front().second;
        if(eat<has){
          has-=eat;
          eat=0;
          ll x=dq.front().first;
          dq.pop_front();
          dq.push_front({x,has});
        }
        else{
          eat-=has;
          dq.pop_front();
        }
      }
      
      while(!dq.empty() && dq.front().first<=i-d){
        dq.pop_front();
      }
    }

    ll s=0;
    while(!dq.empty()){
      s+=dq.front().second;
      dq.pop_front();
    }

    cout<<s<<endl;
    }
  }
