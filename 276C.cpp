#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,q;
  cin>>n>>q;
  vector<ll>v(n);
  vector<ll>freq(n+2,0);
  priority_queue<ll>pq;
  for(ll i=0;i<n;i++){
    cin>>v[i];
    pq.push(v[i]);
  }

  vector<pair<ll,ll>>queries;
  while(q--){
    ll l,r;
    cin>>l>>r;
    freq[l-1]++;
    freq[r]--;
    queries.push_back({l,r});
  }

  for(ll i=1;i<=n;i++){
    freq[i]+=freq[i-1];
  }

  vector<pair<ll,ll>>freq_idx;
  for(ll i=0;i<n;i++){
    freq_idx.push_back({freq[i],i});
  }
  sort(freq_idx.rbegin(),freq_idx.rend());
  vector<ll>ans(n+1,0);
  for(ll i=0;i<freq_idx.size();i++){
    ll idx=freq_idx[i].second;
    ll el=pq.top();
    pq.pop();
    ans[idx]=el;
  }
  vector<ll>pref_sum(n+1,0);
  for(ll i=1;i<=n;i++){
    pref_sum[i]=pref_sum[i-1]+ans[i-1];
  }
  ll sum=0;
  for(ll i=0;i<queries.size();i++){
    ll left=queries[i].first;
    ll right=queries[i].second;
    sum=sum + (pref_sum[right]-pref_sum[left-1]);
  }

  cout<<sum<<endl;
}