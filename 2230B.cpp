#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ll cnt4=0,cnt2=0,min13=0;
    string cleaned="";
    for(ll i=0;i<s.size();i++){
      if(s[i]=='4'){
        cnt4++;
      }
      else{
        cleaned+=s[i];
        if(s[i]=='2') cnt2++;
      }
    }
      ll ans=cnt2;
    for(ll i=0;i<cleaned.size();i++){
      if(cleaned[i]=='1' || cleaned[i]=='3'){
        min13++;
      }
      else{
        cnt2--;
      }

      ans=min(ans,min13+cnt2);
    }

    cout<<ans+cnt4<<endl;
  }
}