#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int a,b;
    string quee;
    cin>>a>>b;
    cin>>quee;
    int t=0;

        do{
        for(size_t i=0;i<quee.size()-1;i++)
        {
            if(quee[i]=='B' && quee[i+1]=='G')
            {
                quee[i]='G';
                quee[i+1]='B';
                i++;
            }
        }
        t++;
       }while(t<b);


    cout<<quee<<endl;

}
