#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n,m;
    cin>>n>>m;
    map<string,string>names;
    for(long long i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        names[a]=b;

    }

    map<string,long long>chefname;
    map<string,long long>countryname;

    for(long long i=0;i<m;i++)
    {
        string a;
        cin>>a;
        chefname[a]++;
        countryname[names[a]]++;
    }


    long long cnt=0;
    string x="";
    for(auto[country,cont] : countryname)
    {
        if(cont>cnt)
        {
            cnt=cont;
            x=country;
        }
    }

    cout<<x<<endl;

    x="";
    cnt=0;

    for(auto[chef,cont] : chefname)
    {
        if(cont>cnt)
        {
            cnt=cont;
            x=chef;
        }
    }

    cout<<x<<endl;


}