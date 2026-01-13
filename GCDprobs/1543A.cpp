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
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            if(a<b)
            swap(a,b);

            long long d=a-b;
            cout<<a-b<<" "<<min(a%d,d-(a%d))<<endl;

        }
    }
}
