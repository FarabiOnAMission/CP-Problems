#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    int p,q;
    int t=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        int capacity=q-p;
        if(capacity >= 2)
        {
            t++;
        }
    }

    cout<<t<<endl;

    return 0;
}
