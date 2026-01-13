#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int t;
    cin>>t;
    int n,m,l,r;
    int a=0,b=0;

    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>l>>r;
        int x=abs(l/r);
        if(abs(l)>abs(r))
        {
            a= a- int( m/x) ;
            b= b+ int(m/x) ;
            a= a - (m-(a+b));
            b= b + (m-(a+b));
        }

    }

    cout<<a<<b;
    return 0;
}
