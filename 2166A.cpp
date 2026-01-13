#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    char target=s[n-1];
    ll ans=0;
    for(ll i=n-2;i>=0;i--){
      if(s[i]!=target){
        ans++;
      }
    }

    cout<<ans<<endl;
  }
}