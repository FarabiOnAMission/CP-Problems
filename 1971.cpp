#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {   int a,b,c,d;
        cin>>a>>b;
        int m=min(a,b);
        int n=max(a,b);
        cin>>c>>d;
        int co=0;

        if(m<c && c<n)
        {
            if(m<d && d<n)
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }

        else if(m<d && d<n)
        {
            if(m<c && c<n)
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }

        else
            cout<<"NO"<<endl;




    }
}
