#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string lang;
    string conv;
    cin>>lang;
    cin>>conv;
    int counts=0;

    if(lang.size()==conv.size())
    {

    for(int i=0;i<lang.size();i++)
    {
        if(lang[i]==conv[lang.size()-i-1])
        {
            counts++;
        }
    }

    if(counts==lang.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }

    else
        cout<<"NO"<<endl;

    return 0;
}
