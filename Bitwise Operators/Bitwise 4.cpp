#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    if((n&(1LL<<k)))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}