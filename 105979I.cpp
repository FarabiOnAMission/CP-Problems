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
        long long x,k;
        cin>>x>>k;
        if(x>=k)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            long long a,b;
            long long c=1;
            a=x;
            b=x;
            while(a<k)
            {   long long temp=a;
                a+=b;
                b=temp;
                c++;
            }
            cout<<c<<endl;
        }
    }
}
