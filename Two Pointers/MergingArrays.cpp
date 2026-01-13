#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  for (ll i = 0; i < n; i++) cin >> a[i];
  for (ll i = 0; i < m; i++) cin >> b[i];
  vector<ll> c(n + m);
  ll i=0, j=0;
  while(i<n || j<m){
    if (j==b.size() || (i < n && a[i] <= b[j])) {
      c[i + j] = a[i];
      i++;
    } 
    else {
      c[i + j] = b[j];
      j++;
    }
    }for(ll k = 0; k < i + j; k++){
      cout << c[k] << " ";
    }
}