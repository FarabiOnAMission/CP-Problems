#include<bits/stdc++.h>

using namespace std;
using ll = long long;
bool chc(vector<ll> &a, vector<ll> &b, ll m, ll k, ll n)
{
    for(ll i = 0; i < n; i++)
    {
        if (a[i] > 0 && m > LLONG_MAX / a[i])
            return false;

        ll req = a[i] * m;
        ll c = max(0LL, req - b[i]);
        if (k < c)
            return false;
        k -= c;
    }
    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    for(ll i = 0; i < n; i++)
        cin >> a[i];

    for(ll i = 0; i < n; i++)
        cin >> b[i];

    ll l = 0, r = 2e9, ans = 0;
    while(l <= r)
    {
        ll m = l + (r - l) / 2;
        if(chc(a, b, m, k, n))
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }

    cout << ans << endl;
}
