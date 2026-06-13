#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  /*
  What bubble sort does is scan the array several times, in each pass
  Compare adjacent elements and swap them, in this way the biggest element will go to last place
  then again and again and again this way the biggest elements will stack up at the last place one by one

  after every pass, we can divide the array into two parts,
  First part is unsorted and second part is sorted
  
  There maybe some case where the array is already sorted at the midst of passing -- so we can optimize that
  also we need to scan the array whole time -- we can skip the last elements that are already sorted
  every pass one element will go to the last place so we can subtract it
  */
  ll cnt=0;
  for(ll k=0;k<n-1;k++){
    ll flag=0;
    for(ll i=0;i<n-k-1;i++){
      if(v[i]>v[i+1]){
        swap(v[i],v[i+1]);
        cnt++;
        flag=1;
      }
    }
    if(flag==0) break;
  }

  cout<<"Array is sorted in "<<cnt<<" swaps."<<endl;
  cout<<"First Element: "<<v[0]<<endl;
  cout<<"Last Element: "<<v[n-1]<<endl;
}