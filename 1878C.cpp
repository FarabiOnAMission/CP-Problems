#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       long long n,k,x;

       cin>>n>>k>>x;



        long long min_sum=(k*(k+1))/2;
        long long m_s=(k*(2*n+(k-1)*(-1)))/2;
        long long max_sum=abs(m_s);

        if(k>x)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           if(x>=min_sum && x<=max_sum)
           {
               cout<<"YES"<<endl;
           }
           else
                cout<<"NO"<<endl;
       }

        }
    }
