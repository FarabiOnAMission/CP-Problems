#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
  int t;
  int n,k;
  int a;
  int counts;
  vector <int> store;

  for(int i=0;i<t;i++)
  {
      cin>>n>>k;
      for(int l=0;l<n;l++)
      {
          cin>>a;
          store.push_back(a);

      }
      std::sort(store.begin(),store.end());

      do(
      for(int j=0;j< store.size();j++)
      {
          for(int m=j+1;m< store.size();j++ )
          {
              if(store[j] + store[m] == k )
                counts++;
          }
      }
      )while(counts<=n/2);
  }





}
