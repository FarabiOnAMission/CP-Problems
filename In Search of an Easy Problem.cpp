#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    int t=0;
    int b;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>b;

        if(b==1)
        {
            t++;
        }
    }

    if(t>0)
    {
        cout<<"HARD"<<endl;
    }
    else
        cout<<"EASY"<<endl;

    return 0;
}
