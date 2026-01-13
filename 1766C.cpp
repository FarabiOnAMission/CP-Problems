#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n;
vector<string>grid(2);

bool traverse(ll start){
ll curr=start;

for(ll i=0;i<n;i++){
  if(grid[curr][i]=='W'){
    return false;
  }
  if(grid[curr][i]=='B' && grid[1-curr][i]=='B'){
    curr=1-curr;
  }
}

return true;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>grid[0]>>grid[1];

    if(traverse(1) || traverse(0)){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}

