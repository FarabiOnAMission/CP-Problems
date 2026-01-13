#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        long long m1=min(a,c);
        long long m2=min(b,d);

        if(m1>=m2)
        {
            cout<<"Gellyfish"<<endl;
        }
        else
        {
            cout<<"Flower"<<endl;
        }
    }
}
