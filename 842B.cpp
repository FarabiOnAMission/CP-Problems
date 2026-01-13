#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,d;
    cin>>r>>d;
    int c=0;
    double rd=r-d;

    int n;
    cin>>n;
    while(n--)
    {
        double x,y,ri;
        cin>>x>>y>>ri;
        double rx= sqrt((x*x)+y*y);
        if(rx-rd>=ri && r-rx>=ri)
        {
            c++;
        }

    }

    cout<<c<<endl;

}
