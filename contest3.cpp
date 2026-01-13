#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vpl = vector<pair<ll,ll>>;
using vtl = vector<tuple<ll,ll,ll>>;
 
#define pb push_back
#define pf push_front
#define xrep(i,a,b) for(ll i = a; i < b; i++)
#define rep(i,a,b) for(ll i = a; i <= b; i++)
#define filla(a) for(auto& x : a) cin >> x
#define fillv(v,n) xrep(i,0,n){ll xv; cin >> xv; v.pb(xv);}
#define fills(s,n) xrep(i,0,n){ll xv; cin >> xv; s.insert(xv);}
#define all(x) x.begin(),x.end()

void solve(){

    ll n,a,b,c,d; cin >> n;
    set<pair<ll,ll>> s;
    vpl v;
    xrep(i,0,n){
        cin >> a >> b;
        v.pb({a,b});
        s.insert({a,b});
    }
    if(n<3){
        ll res;
        switch(n){
            case 0: res = 4; break;
            case 1: res = 3; break;
            case 2: res = 2; break; 
        }
        cout << res << '\n';
        return;
    }

    ll maxans = 2;
    ll ax,bx,ay,by;
    xrep(i,0,n-1){
        xrep(j,i+1,n){
            ax = v[i].first; ay = v[i].second;
            bx = v[j].first; by = v[j].second;
            ll dx=bx-ax;
            ll dy=by-ay;
            
            pair<ll,ll>p1={ax-dy,ay+dx};
            pair<ll,ll>p2={bx-dy,by+dx};
            pair<ll,ll>p3={ax+dy,ay-dx};
            pair<ll,ll>p4={bx+dy,by-dx};
            
            ll c1=0,c2=0;
            
        if(s.find(p1)==s.end())c1++;
        if(s.find(p2)==s.end())c1++;
            
        if(s.find(p3)==s.end())c2++;
        if(s.find(p4)==s.end())c2++;

        maxans=min({c1,c2,maxans});
        
        
}
}
    cout<<maxans<<endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t; 
    // cin >> t;
    // while(t--){
        solve();
    // }

    return 0;
}
