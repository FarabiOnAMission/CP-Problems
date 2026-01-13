#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  vector<ll>v(3);
  cin>>v[0]>>v[1]>>v[2];
  sort(v.rbegin(),v.rend());

  cout<<v[0]<<v[1]<<v[2]<<endl;

}