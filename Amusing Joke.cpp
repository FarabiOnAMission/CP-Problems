#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string name1;
    string name2;
    string name3;
    vector <char> name1v;
    vector <char> name2v;
    vector <char> name3v;
    cin>>name1;
    cin>>name2;
    cin>>name3;

    for(int i=0;i<name1.size();i++)
    {

        name1v.push_back(name1[i]);
    }
        for(int i=0;i<name2.size();i++)
    {

        name2v.push_back(name2[i]);
    }

        for(int i=0;i<name3.size();i++)
    {

        name3v.push_back(name3[i]);
    }


    name1v.insert(name1v.end(),name2v.begin(),name2v.end());

    std::sort(name1v.begin(),name1v.end());
    std::sort(name3v.begin(),name3v.end());

    if(name1v==name3v)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

        return 0;

}
