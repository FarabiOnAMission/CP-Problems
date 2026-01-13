#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    double p1=(b/m);
    double p2=double(a);
    if(p1<p2)
    {
        cout<<min((n/m)*b + (n%m)*a,((n+m-1)/m)*b)<<endl;
    }
    else
    {
        cout<<n*a<<endl;
    }

}
