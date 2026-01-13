#include<iostream>
#include<string>
#include<unordered_set>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    std::string username;
    cin>>username;

    std::unordered_set<char> unique_chars(username.begin(),username.end());

    if(unique_chars.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
