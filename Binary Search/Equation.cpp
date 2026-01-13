#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    double c;
    cin>>c;

    double l=0,r=c;
    double eps=1e-10;
    double ans=0;
    while(r-l>eps)
    {
        double m=l+(r-l)/2;
        if(m*m + sqrt(m) <c)
            l=m;
        else
            r=m;

        ans=m;
    }

    cout<<setprecision(20);
    cout<<ans<<endl;

}
