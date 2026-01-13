#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long i=0;
    int arr[3]={0,1,2};
    while(i<(n%6))
    {
        i++;
        if(i%2==1)
        {
            swap(arr[0],arr[1]);
        }
        else
        {
            swap(arr[1],arr[2]);
        }

    }

    cout<<arr[k]<<endl;


}
