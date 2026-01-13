#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll l,r;
  cin>>l>>r;
  n--;
  vector<ll>visited(101,true);
  while(n--){
    ll x,y;
    cin>>x>>y;
    for(ll i=x;i<y;i++){
      visited[i]=false;
    }
  }

  ll c=0;
  for(ll i=l;i<r;i++){
    if(visited[i]==true) c++;
    }

    cout<<c<<endl;
}