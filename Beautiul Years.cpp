#include<iostream>
#include<set>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int year1;
    cin>>year1;

    string size1=std::to_string(year1);
    std::set <char> s;


    do
    {   s.clear();
        year1=year1 + 1;
        string strNum = std::to_string(year1);
        for(int i=0;i< strNum.size();i++)
        {
             s.insert(strNum[i]);
        }

    }while(s.size() <size1.size());

    cout<<year1<<endl;

    return 0;
}
