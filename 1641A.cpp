#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using vll=vector<long long>;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        ll c=0;
        cin>>n>>x;
        vll a(n);
        map<ll,ll>freq;
        set<ll>s;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            s.insert(a[i]);
        }
        sort(a.begin(),a.end());
        vector<ll>val(s.begin(),s.end());
        for(ll g:val){
            if(!s.count(g)) continue;
            
            if(freq[g]<freq[g*x]){
                s.erase(g);
                freq[g*x]-=freq[g];
            }
            else if(freq[g]==freq[g*x]){
                s.erase(g);
                s.erase(g*x);
            }
            else{
                freq[g]-=freq[g*x];
                s.erase(g);
                s.erase(g*x);
                c+=freq[g];
            }
        }
        cout<<c<<endl;
    }
}
