#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int w,n,k;
    cin>>k>>n>>w;
    int cost=0;

    for(int i=1;i<=w;i++)
    {
        cost=cost + k*i;
    }

    int borrow=cost-n;

    if(borrow<0)
    {
        borrow=0;
    }

    cout<<borrow<<endl;

    return 0;
}





