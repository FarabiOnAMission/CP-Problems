#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll max_val=2e5+5;
vector<ll>spf(max_val+1);

void calc(){
for(ll i=1;i<=max_val;i++){
      spf[i]=i;
  }

for(ll i=2;i*i<=max_val;i++){
      if(spf[i]==i){
        for(ll j=i*i;j<=max_val;j+=i)
          if(spf[j]==j) spf[j]=i;
      }
    }
  }

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  calc();

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];

    map<ll,ll>freq;

    bool zero=false;
    for(ll i=0;i<n;i++){
      set<ll>s;
      ll k=a[i];
      while(k>1){
        s.insert(spf[k]);
        k/=spf[k];
      }
      for(auto x:s) {
        freq[x]++;

        if(freq[x]>1){
          zero=true;
          break;
        }
      }

      if(zero) break;
    }
    if(zero){
      cout<<0<<endl;
      continue;
    }

    bool one=false;
    for(ll i=0;i<n;i++){
      set<ll>s;
      ll k=a[i]+1;
      while(k>1){
        s.insert(spf[k]);
        k/=spf[k];
      }

      for(auto x:s){
        if(freq[x]){
          one=true;
          break;
        }
      }
      if(one) break;
    }
    if(one){
      cout<<1<<endl;
      continue;
    }

    cout<<2<<endl;
  }
}