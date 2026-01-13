#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    for(int i=0;;i++)
    {
        cin>>x;
        if(x==1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else
            cout<<"Wrong"<<endl;
    }
    return 0;
}
