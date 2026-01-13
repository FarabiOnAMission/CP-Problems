#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;

    while(t--)
    {
    uint32_t n;
    cin>>n;
    uint32_t r=0;
    for(int i=0;i<32;i++)
    {
        r<<=1;
        r |= (n&1);
        n>>=1; 
    }
    cout<<r<<endl;
}
}