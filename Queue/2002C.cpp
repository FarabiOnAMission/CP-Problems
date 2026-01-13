#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>x(n);
        vector<long long>y(n);

        bool f=true;
        for(long long i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }

        long long xi,yi,xf,yf;
        cin>>xi>>yi>>xf>>yf;

        long double d1=(xf-xi)*(xf-xi) + (yf-yi)*(yf-yi);

        for(long long i=0;i<n;i++)
        {
            if((xf-x[i])*(xf-x[i]) + (yf-y[i])*(yf-y[i])<=d1)
                f=false;
        }

        if(f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}
