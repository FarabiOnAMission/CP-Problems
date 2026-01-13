#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int up_count=0;
    int low_count=0;
    string word;
    cin>>word;

    for(int i=0;i<word.length();i++)
    {
        if(isupper(word[i]))
        {
            up_count++;
        }
    }
        for(int i=0;i<word.length();i++)
    {
        if(islower(word[i]))
        {
            low_count++;
        }
    }

    if(up_count>low_count )
    {
        for(int i=0;i<word.length();i++)
        {
            word[i]=toupper(word[i]);
        }

        cout<<word;
    }

    if(low_count>up_count || up_count == low_count)
    {
        for(int i=0;i<word.length();i++)
        {
            word[i]=tolower(word[i]);
        }

        cout<<word;
    }

}
