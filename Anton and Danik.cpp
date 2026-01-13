#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int length;
    cin>>length;
    string games;
    int antony=0;
    int danik=0;

    cin>>games;

    for(int i=0;i<games.size();i++)
    {
        if(games[i]=='A')
        {
            antony++;
        }
        else if(games[i]=='D')
        {
            danik++;
        }
    }

    if(antony>danik)
    {
        cout<<"Anton"<<endl;
    }
    else if(danik>antony)
    {
        cout<<"Danik"<<endl;
    }
    else
        cout<<"Friendship"<<endl;


    return 0;


}
