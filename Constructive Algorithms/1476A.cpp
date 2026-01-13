#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k%n==0)
            {cout<<k/n<<endl;}
        else if(n%k==0)
            {cout<<1<<endl;}
        else if(n>k)
            cout<<2<<endl;
        else
            {cout<<(k+n-1)/n<<endl;}


    }
}
