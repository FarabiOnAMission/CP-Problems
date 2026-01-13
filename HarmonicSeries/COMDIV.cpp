#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
       long long a;
       cin>>a;

        int sum = 0;
        for(int i = 1; i * i <=a; ++i) {
            if(a % i == 0) {
                sum+=i;

            if(i*i!=a)
                sum+=(a/i);
            }
        }

    sum=sum-a;

    if(sum>a)
        {cout<<"abundant"<<endl;}
    else if(sum<a)
        {cout<<"deficient"<<endl;}
    else
        cout<<"perfect"<<endl;


    }
    return 0;
}
