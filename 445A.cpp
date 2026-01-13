#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

    ll n,m;
    cin>>n>>m;

    char arr[n][m];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(i%2==0)
            {
                if(j%2==0 && arr[i][j]=='.')
                    arr[i][j]='B';
                if(j%2==1 && arr[i][j]=='.')
                    arr[i][j]='W';

            }
            if(i%2==1)
            {
                if(j%2==0 && arr[i][j]=='.')
                    arr[i][j]='W';
                if(j%2==1 && arr[i][j]=='.')
                    arr[i][j]='B';

            }
        }

    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            cout<<arr[i][j];
        cout<<endl;
    }

}
