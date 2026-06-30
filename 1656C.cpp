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
    map<ll,ll>freq;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      freq[v[i]]++;
    }
    if(freq[1]==0){
      cout<<"YES"<<endl;
      continue;
    }

    ll f=0;
    for(ll i=0;i<n;i++){
      if(freq[v[i]+1]>0){
        f=1;
        break;
      }
    }
    if(f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}

/*

divide all evens by 2 then remainder is 0
then all odd numbers will have remainder 1

if 1 not present in the array then you can make the array 0 by diving the array multiple times with max(array) and make it 0
if 1 present in the array then if two consecutive elements are present then you cant make it 0 because dividing by max(ai)-1 will make it 0


*/