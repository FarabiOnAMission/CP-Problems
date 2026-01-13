#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";

    string word;
    char p;
    string c;
    cin>>p;
    cin>>c;

    for(int i=0;i<c.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(p=='R')
            {
                if(c[i]==s1[j])
                {
                    word+=s1[j-1];
                    break;
                }

            }

            else
            {
                if(c[i]==s1[j])
                {
                    word+=s1[j+1];
                    j++;
                    break;
                }
            }
        }
    }

    cout<<word<<endl;


}
