#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        multiset<ll>ms;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            ms.insert(a[i]);
        }
        ll c=0; 
        ll bonus=0;
        vector<ll>ans;
        for(ll i=0;i<n;i++){
            ll g; 
            if(c==0){
            g=x;
            }
            else{
                g=x-c;
            }
            auto it=ms.lower_bound(g);
            if(it==ms.end()){
                ll d=*ms.begin();
                ms.erase(ms.begin()); 
                ans.push_back(d);
                c=(c+d)%x;
            }
            else{
                ll d=*ms.rbegin();
                ms.erase(prev(ms.end())); 
                ans.push_back(d);
                bonus+=d;
                c=(c+d)%x;
            }
        }
    
        cout<<bonus<<endl;
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}