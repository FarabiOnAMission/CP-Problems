#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        long long a,b;
        cin>>x>>y;
        cin>>a>>b;
        long long m1=max(x,y);
        long long m2=min(x,y);

        if(b<=2*a)
        {
                long long d=((m1-m2)*a)+(m2*b);
                cout<<d<<endl;
        }
        else
        {
            long long d=(x+y)*a;
            cout<<d<<endl;
        }


    }

}

