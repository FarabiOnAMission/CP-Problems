#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n,h;
    cin>>n>>h;
    int a;
    int counts=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(h>=a)
        {
            counts=counts+1;
        }
        else
        {
            counts=counts+2;
        }
    }

    cout<<counts<<endl;

}
