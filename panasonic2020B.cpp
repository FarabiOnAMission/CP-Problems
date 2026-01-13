#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,m;
    cin>>n>>m;

    if(n==1 || m==1)
      cout<<1<<endl;

    else if(n%2==0 && m%2==0){
        cout<<(n*m)/2<<endl;
    }
    else if(n%2==0 && m%2==1){
        cout<<(n/2)*((m+1)/2) + (n/2)*((m-1)/2)<<endl;
    }
    else if(n%2==1 && m%2==0){
        cout<<((n+1)/2)*(m/2) + ((n-1)/2)*(m/2)<<endl;
    }
    else{
        cout<<((n+1)/2)*((m+1)/2) + ((n-1)/2)*((m-1)/2)<<endl;
    }
}
