#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<ll> merge(vector<ll>&a,vector<ll>&b){
  vector<ll>srted;
  ll n=a.size();
  ll m=b.size();
  ll i=0,j=0;
  while(i<n || j<m){
    if(j==m || (i<n && a[i]<b[j])){
      srted.push_back(a[i++]);
    }
    else{
      srted.push_back(b[j++]);
    }
  }

  return srted;
}

void sort(vector<ll>&v){
  if(v.size()<2) return;
  ll mid=v.size()/2;
  vector<ll>a(v.begin(),v.begin()+mid);
  vector<ll>b(v.begin()+mid,v.end());
  sort(a);
  sort(b);
  
  v=merge(a,b);
}

int main(){

}