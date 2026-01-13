#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v;
  for(ll i=0;i<n;i++){
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum=(a+b+c+d);
    v.push_back({sum,i+1});
  }
    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        if (a.first != b.first)
          return a.first > b.first;  
        return a.second < b.second;   
    });

    for(ll i=0;i<n;i++){
      if(v[i].second==1){
        cout<<i+1<<endl;
        break;
      }
    }
}