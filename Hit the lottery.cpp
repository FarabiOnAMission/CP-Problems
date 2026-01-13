#include<iostream>
#include<array>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int a,x,count=0;
    int remainder;
    int money[5]={100,20,10,5,1};

    cin>>a;
    for(int i=0;i<5;i++)
    {
        count = count + a/money[i];
        a= a%money[i];
    }
    cout<<count<<endl;

    return 0;

    }

