#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

    ll n,a,b;
    string s;
    cin>>n>>a>>b;
    cin>>s;

    ll ct=0,cb=0;

    for(ll i=0;i<n;i++){
        if(s[i]=='a'){
            if(ct<a+b){
            cout<<"Yes"<<endl;
            ct++;
        }
            else cout<<"No"<<endl;
        }
        else if(s[i]=='b'){
            if(ct<a+b && cb<b){
                cout<<"Yes"<<endl;
                ct++;
                cb++;
            }
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }


}
