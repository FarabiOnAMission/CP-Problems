#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>a(n+1);
  vector<ll>zeros;
  vector<ll>negs,pos;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]==0) zeros.push_back(i);
    else if(a[i]<0) negs.push_back(i);
    else pos.push_back(i);
  }

  sort(negs.begin(), negs.end(), [&](ll i, ll j){
    return abs(a[i]) < abs(a[j]); 
});

if(negs.size()%2==1){
  zeros.push_back(negs[0]);
  negs.erase(negs.begin());
}

vector<ll>finale=negs;
finale.insert(finale.end(),pos.begin(),pos.end());
if(zeros.size()>0){
  for(ll i=0;i<zeros.size()-1;i++){
    cout<<1<<' '<<zeros[i]<<' '<<zeros[i+1]<<endl;
  }
  if(finale.size()>0){
    cout<<2<<' '<<zeros.back()<<endl;
  }
}

if(finale.size()>0){
for(ll i=0;i<finale.size()-1;i++){
  cout<<1<<' '<<finale[i]<<' '<<finale[i+1]<<endl;
}
}
}
