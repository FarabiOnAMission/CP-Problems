#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    cin>>a;
    string x;
    int c=0;
    int t=0;

    cin>>x;

    for(int i=0;i<a;i++)
    {
        if(x[i]=='x')
        {
            c++;
            if(c>=3)
            {
                t++;
            }
        }
        else
            c=0;
    }

    cout<<t<<endl;

}
