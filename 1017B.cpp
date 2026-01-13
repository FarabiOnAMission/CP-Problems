#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  string a,b;
  cin>>n>>a>>b;
  ll c00=0,c11=0,c10=0,c01=0;

  for(ll i=0;i<n;i++){
    if(a[i]=='0' && b[i]=='0') c00++;
    else if(a[i]=='1' && b[i]=='1') c11++;
    else if(a[i]=='1' && b[i]=='0') c10++;
    else if(a[i]=='0' && b[i]=='1') c01++;
  }

  ll ans=c00*c11 + c10*c01 + c00*c10;
  cout<<ans<<endl; 
}