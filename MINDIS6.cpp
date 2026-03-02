#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
	ll t;
	cin>>t;
	while(t--){
      ll n,k;
      cin>>n>>k;
      vector<ll>v(n);
      map<ll,ll>freq;
      vector<pair<ll,ll>>freqsorted;
      for(ll i=0;i<n;i++){
        cin>>v[i];
        freq[v[i]]++;
      }
      ll one = v[0];
      for(auto s:freq){
        if(s.first!=one){
          freqsorted.push_back({s.second,s.first});
        }
      }
      sort(freqsorted.begin(),freqsorted.end());
      for(ll i=0;i<freqsorted.size();i++){
        ll f=freqsorted[i].first;
        if(k>=f){
          k-=f;
          freqsorted[i].first=0;
        }
        else{
          break;
        }
      }
      ll c=1;
      for(ll i=0;i<freqsorted.size();i++){
        if(freqsorted[i].first!=0){
          c++;
        }
      }

      cout<<c<<endl;
	}

}
