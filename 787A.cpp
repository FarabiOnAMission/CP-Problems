#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int g=gcd(a,-c);

    if((d-b)%g!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(long long i=0;;i++)
        {
            long long t= a*i + b;
            if((t-d)%c==0 && t>=d)
            {
                cout<<t<<endl;
                return 0;
            }
        }
    }

    return 0;
}
