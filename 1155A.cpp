#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    pair<ll,ll>ans={-1,-1};
    for(ll i=1;i<n;i++){
      if(s[i]<s[i-1])
      {
        ans=make_pair(i-1,i);
        break;
      }
    }
    if(ans.first==-1)
      cout<<"NO"<<endl;
    else{
    cout<<"YES"<<endl;
    cout<<ans.first+1<<' '<<ans.second+1<<endl;
    }
  }
