#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    vector<string>ss;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        ss.push_back(s);
    }

    string word=ss[0];
    vector<string>t1;
    vector<string>t2;
    int a=0,b=0;


    for(int i=0;i<n;i++)
    {
        if(ss[i]==word)
            t1.push_back(word);
        else
        {
            t2.push_back(ss[i]);
        }
    }


    if(t1.size()>t2.size())
    {
        cout<<word<<endl;
    }
    else
        cout<<t2[0]<<endl;

}
