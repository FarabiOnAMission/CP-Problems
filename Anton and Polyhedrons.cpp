#include<iostream>
#include<string>
#include<array>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int n=0;
    int a;
    string name;
    string shapes[5]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    int faces[5]={4,6,8,12,20};

    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>name;
    for(int i=0;i<5;i++)
    {

        if(name == shapes[i])
        {
            n = n + faces[i];
        }
    }

    }

    cout<<n<<endl;

    return 0;
}
