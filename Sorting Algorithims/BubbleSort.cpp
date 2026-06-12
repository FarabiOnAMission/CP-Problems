#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n=6;
  ll arr[n]={2,7,4,1,5,3};

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

  for(ll k=0;k<n;k++){
    ll flag=0;
    for(ll i=0;i<n-k-1;i++){
      if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        flag=1;
      }
    }
    if(flag==0) break;
  }

  for(ll i=0;i<n;i++) cout<<arr[i]<<' ';
}