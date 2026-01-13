#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> div={4,7,44,47,74,77,447,474,477,744,747,774,777};
    int k;
    cin>>k;
    int c=1;

    for(int i=0;i<div.size();i++)
    {
        if(k%div[i]==0)
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
