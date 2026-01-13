#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  double p;
  cin>>n>>p;
  vector<pair<double,double>>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i].first>>v[i].second; 
  }

  double ans=0;

    for(ll i=1;i<n;i++){
    double x1=v[i-1].first;
    double x2=v[i].first;
    double y1=v[i-1].second;
    double y2=v[i].second;

    ans+=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  }

  ans+=sqrt((v[n-1].first-v[0].first)*(v[n-1].first-v[0].first)+(v[n-1].second-v[0].second)*(v[n-1].second-v[0].second));
  ans+=(2*3.1416*(p));

  cout<<fixed<<setprecision(2)<<ans<<endl;
}