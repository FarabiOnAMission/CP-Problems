#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  set<ll>cnt2;
  vector<ll>visited={false};
  visited.resize(n+1);
  vector<ll>a(n+1);
  for(ll i=1;i<=n;i++){
    cin>>a[i];
  }

  ll curr=1;
  ll cnt=0;
  while(true){
    if(visited[a[curr]]){
      cout<<-1<<endl;
      return 0;
    }
    visited[a[curr]]=true;
    curr=a[curr];
    cnt++;
    if(visited[2]==true){
      cout<<cnt<<endl;
      return 0;
    }
    
  }
}