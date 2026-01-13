#include<iostream>
#include<set>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string line;
    getline(cin,line);

    std::set <char> s;

    for(size_t i=0;i<line.size();i++)
    {

       if(isalpha(line[i]))
       {s.insert(line[i]);
       }
    }

    cout<<s.size()<<endl;
}
