#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows,cols;
    cin>>rows>>cols;
    std::vector<std::vector<char>> matrix(rows, std::vector<char>(cols,0));

    for(int i=0;i<rows;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<cols;j++)
            matrix[i][j]='#';
        }

        else
        {
            for(int j=0;j<cols;j++)
            {
            matrix[i][j]='.';
            if(i%4==1)
            {
                matrix[i][cols-1]='#';
            }
            else if(i%4==3)
            {
                matrix[i][0]='#';
            }
            }
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j];
        }

        cout<<endl;
    }


return 0;
}
