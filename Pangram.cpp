#include<iostream>
#include<string>
#include<set>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int n;
    string word;
    cin>>n;
    cin>>word;
    std::set<char> s;

    for(int i=0;i<n;i++)
    {
        if(isupper(word[i]))
            word[i]=tolower(word[i]);
        s.insert(word[i]);
    }

    if(s.size()== 26)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

        return 0;

}
