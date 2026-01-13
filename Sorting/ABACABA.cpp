#include<bits/stdc++.h>

using namespace std;
using ll=long long;

string ab(int n,vector<string>&v)
{
    if(n==1)
        return v[0];

    string temp=ab(n-1,v);
    return temp +  v[n-1] + temp;
}


int main()
{
    vector<string>v={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P"};
    int n;
    cin>>n;
    cout<<ab(n,v);
}
