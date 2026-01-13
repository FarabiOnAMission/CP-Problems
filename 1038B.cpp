#include<bits/stdc++.h>
 
using namespace std;
using ll=long long;
 
int main(){
    ll n;
    cin>>n;
    if(n<3){
        cout<<"No"<<endl;
        return 0;
    }
    ll x1,x2;
    if(n%2==0){
        x1=x2=n/2;
    }
    else{
        x1=(n-1)/2;
        x2=(n+1)/2;
    }

    cout<<"Yes"<<endl;
    cout<<x1<<' ';
    for(ll i=1;i<=x1;i++){
        cout<<2*i<<' ';
    }
    cout<<endl;
    cout<<x2<<' ';
    for(ll i=1;i<=x2;i++){
        cout<<2*i-1<<' ';
    }
    cout<<endl;

}