#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0,i=0;
    while(i<s.size())
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'  )
            i+=3;
        else if(s[i]=='1' && s[i+1]=='4')
            i+=2;
        else if(s[i]=='1')
            i+=1;
        else
        {
            c=1;
            break;

        }
    }

    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
