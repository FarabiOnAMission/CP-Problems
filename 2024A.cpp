#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a>=b)
        {
            cout<<a<<endl;
            continue;
        }
        else
        {
            long long x=b-a;
            if(a-x<=0)
                cout<<0<<endl;
            else
                cout<<a-x<<endl;
        }
    }
}
