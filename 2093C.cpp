#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        if(n==1)
        {
            cout<<k<<endl;
        }
        else if(n>k)
        {
            cout<<2<<endl;
        }
        else if(n==k || k==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<ceil((float(k)/float(n)))<<endl;
        }
    }

}
