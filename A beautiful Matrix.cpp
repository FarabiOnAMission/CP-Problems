#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{   int rows,cols;
    int arr[5][5];
    int i,j;
    int rowpos;
    int colpos;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }

        for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                rowpos = i;
                colpos = j;
            }
        }
    }

        int moves = abs(rowpos-2) + abs(colpos-2);
        cout<<moves<<endl;


    return 0;
}

