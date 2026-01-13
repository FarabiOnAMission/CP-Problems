#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  int n;
  cin>>n;
  int arr[n+2]{};
  int q;
  cin>>q;
  while(q--){
    int l,r,x;
    cin>>l>>r>>x;
    arr[l]+=x;
    arr[r+1]-=x;
  }
  
  for(int i=1;i<=n;i++){
    arr[i]+=arr[i-1];
  }
  
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<' ';
  }
}