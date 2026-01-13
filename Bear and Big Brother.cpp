#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int Limak;
    int Bob;
    int year=0;
    cin>>Limak;
    cin>>Bob;

    do
    {
        Limak=Limak*3;
        Bob=Bob*2;
        year++;
    }while(Limak<=Bob);

    cout<<year<<endl;
}
