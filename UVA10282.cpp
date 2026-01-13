#include<bits/stdc++.h>

using namespace std;

int main()
{
    string line,a,b;
    unordered_map<string,string>ump;
    while(getline(cin,line))
    {
        if(line=="")
            break;

        istringstream sin(line);
        sin>>a>>b;
        ump[b]=a;
    }
    string t;
    while(cin>>t)
    {
        if(ump.count(t))
            cout<<ump[t]<<endl;
        else
            cout<<"eh"<<endl;
    }
}
