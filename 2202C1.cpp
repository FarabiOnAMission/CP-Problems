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

    // prothome dekhte hobe jodi Ai>Ai-1 + 1 hoy taile ans barbe
    // jodi Ai-1 >=Ai hoy taile previous ancestor e dekhbo je Ai + 1 ase kina, na thakle ans barabo,thakle stack e boshabo
    // dui tar ektao na hoile stack e dhukabo

    stack<ll>s;
    ll ans=1;
    s.push(v[0]);
    for(ll i=1;i<n;i++){
      while(!s.empty() && s.top()>=v[i]){
        s.pop();
      }

      if(!s.empty() && s.top()==v[i]-1){
        s.push(v[i]);
      }
      else{
        ans++;
        while(!s.empty()){
          s.pop();
        }
        s.push(v[i]);
      }
    }

    cout<<ans<<endl;
  }
}