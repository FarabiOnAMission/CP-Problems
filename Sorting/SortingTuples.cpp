#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool cmp(const tuple<ll,ll,char,ll,string> &c,const tuple<ll,ll,char,ll,string> &d)
{
      ll val1   = get<0>(c); 
      ll w1    = get<1>(c); 
      char type1= get<2>(c); 
      ll date1  = get<3>(c); 
      string s1 = get<4>(c);

      ll val2   = get<0>(d); 
      ll w2     = get<1>(d); 
      char type2= get<2>(d); 
      ll date2  = get<3>(d); 
      string s2 = get<4>(d);

      if(val1!=val2)
        return val1<val2;
      
      if(w1!=w2)
        return w1<w2;
      
      if(type1 !=type2)
        return type1<type2;
      
      if(date1!=date2)
        return date1<date2;

      if(s1!=s2)
        return s1<s2;

      return false;
}

int main()
{
  ll n;
  cin>>n;
  vector<tuple<ll,ll,char,ll,string>>a(n);
  for(ll i=0;i<n;i++)
  {
    ll v,w,date;
    char type;
    string s;
    cin>>v>>w>>type>>date>>s;
    a[i]={v,w,type,date,s};
  }

  sort(a.begin(),a.end(),cmp);

  for (ll i = 0; i < n; i++) {
    cout << get<0>(a[i]) << " "
        << get<1>(a[i]) << " "
        << get<2>(a[i]) << " "
        << get<3>(a[i]) << " "
        << get<4>(a[i]) << "\n";
}
}
