#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  string s1,s2;
  cin>>s1>>s2;

  vector<ll>a;
  vector<ll>b;

  for(char c:s1) a.push_back(c-'0');
  for(char c:s2) b.push_back(c-'0');

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  ll flickget=0;
  ll flickgive=0;

  ll i=0,j=0;
  while(i<n && j<n){
    if(a[i]>b[j]){
      flickget++;
      j++;
    }
    else{
      i++;
      j++;
    }
  }

  i=0,j=0;
  while(i<n && j<n){
    if(a[i]<b[j]){
      flickgive++;
      i++;
      j++;
    }
    else{
      j++;
    }
  }

  cout<<flickget<<endl;
  cout<<flickgive<<endl;
}