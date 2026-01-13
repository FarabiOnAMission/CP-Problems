#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  ll cnt=0;
  vector<ll>divbig;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      cnt++;
      if(cnt==k){ 
        cout<<i<<endl;
        return 0;
      }

      if(i!=n/i) divbig.push_back(n/i);
    }
  }


  if(k<=cnt+divbig.size()){
    cout<<divbig[cnt+divbig.size()-k]<<endl;
  }
  else cout<<-1<<endl;
}

