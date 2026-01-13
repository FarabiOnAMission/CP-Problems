#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b,n;
    int passengers=0,mini=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        passengers=passengers-a+b;
        if(passengers>mini)
        {
            mini=passengers;
        }
    }

    cout<<mini<<endl;
    return 0;
}
