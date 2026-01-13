#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    vector<long long>x(n);
    vector<long long>psum(n+1,0);
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(long long i=1;i<=n;i++)
        {
            psum[i]=psum[i-1]+x[i-1];
        }
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<(psum[r]-psum[l-1])<<endl;
    }
}
