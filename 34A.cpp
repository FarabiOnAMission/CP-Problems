#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>n;
        if(n<2020)
        {
            cout<<"NO"<<endl;
        }
        else
        {   int j=n/2021;

            int c;
            for(int x=0;x<=j;x++)
            {   int ch=n-2021*x;
                if(ch%2020==0)
                {
                    c=1;
                    break;
                }
                else
                    c=0;
            }
            if(c==1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        }


    }


