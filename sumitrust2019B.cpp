#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{

  ll x;
  cin>>x;

  double t1=floor(x/1.08);
  double t2=ceil(x/1.08);

  ll ans1=t1*1.08;
  ll ans2=t2*1.08;

  if(ans1==x) cout<<t1<<endl;
  else if(ans2==x) cout<<t2<<endl;
  else cout<<":("<<endl;
}