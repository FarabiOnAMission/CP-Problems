#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(2*b==a+c)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            if((2*b-a)%c==0 && (2*b-a)/c>0)
            {
                cout<<"YES"<<endl;
            }
            else if((2*b-c)%a==0 && (2*b-c)/a>0 )
            {
                cout<<"YES"<<endl;
            }
            else if((a+c)% (2*b)==0 && (a+c)/2*b>0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

}

}

