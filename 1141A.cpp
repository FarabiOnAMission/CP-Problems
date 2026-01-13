#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;

    if(m%n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {   long long y = m/n;
        int c=0;
        while(y%2==0)
        {
            y/=2;
            c++;
        }
        while(y%3==0)
        {
            y/=3;
            c++;
        }

        if(y>1)
        {
            cout<<-1<<endl;
        }
        else
            cout<<c<<endl;
    }
}
