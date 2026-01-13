#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b;

    cin>>a>>b;

    while(b--)
    {
        if(a%10==0)
        {
            a=a/10;
        }
        else
            a--;
    }

    cout<<a<<endl;
}
