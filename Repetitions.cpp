#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=1;
    int ma=1;
    for(long long i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            m++;
        }
        else
            m=1;

       ma= max(ma,m);


    }
    cout<<ma<<endl;


}
