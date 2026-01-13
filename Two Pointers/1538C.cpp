#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll lessX(vector<ll>& arr,ll x) {
    ll n = arr.size();
    ll count = 0;
    ll left = 0, right = n - 1;

    while(left < right) {
        if (arr[left] + arr[right] < x) {
            count += (right - left);
            left++;
        } else {
            right--;
        }
    }
    return count;
}

ll lessequalX(vector<ll>& arr,ll x) {
    ll n = arr.size();
    ll count = 0;
    ll left = 0, right = n - 1;

    while(left < right) {
        if (arr[left] + arr[right] <= x) {
            count += (right - left);
            left++;
        } else {
            right--;
        }
    }
    return count;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    cout<<lessequalX(v,r) - lessX(v,l)<<endl;

    }
}
