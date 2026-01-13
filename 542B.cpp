#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll ca=1e9,cb=1e9,cc=1e9,cab=1e9,cbc=1e9,cac=1e9,cabc=1e9;
  set<char>uniq;
  for(ll i=0;i<n;i++) {
    ll x;
    string s;
    cin>>x>>s;
    sort(s.begin(),s.end());
    if(s=="A"){
      ca=min(x,ca);
      uniq.insert('a');
    }
    else if(s=="B"){
      cb=min(x,cb);
      uniq.insert('b');
    }
    else if(s=="C"){
      cc=min(x,cc);
      uniq.insert('c');
    }
    else if(s=="AB"){
      cab=min(x,cab);
      uniq.insert('a');
      uniq.insert('b');
    }
    else if(s=="BC"){
      cbc=min(x,cbc);
      uniq.insert('b');
      uniq.insert('c');
    }
    else if(s=="AC"){
      cac=min(x,cac);
      uniq.insert('a');
      uniq.insert('c');
    }
    else{
      cabc=min(x,cabc);
      uniq.insert('a');
      uniq.insert('b');
      uniq.insert('c');
    }
  }
  if(uniq.size()<3){
    cout<<-1<<endl;
    return 0;
  }
  ll y=min({ca+cb+cc,ca+cbc,cab+cc,cac+cb,cabc,cab+cbc,cac+cbc,cab+cac});
  cout<<y<<endl;
}