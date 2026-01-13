#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<long long>a(n);

    for(long long &x:a)
    {
        cin>>x;
    }
    long long c=0;
    for(long long mask=0;mask<(1<<n);mask++)
    {   if (__builtin_popcount(mask) >= 2)
    {
    long long ss = 0;
    long long mn=LLONG_MAX;
    long long mx=LLONG_MIN;
	for(int i = 0; i < n; i++) 
    {
		if(mask & (1 << i)) 
        {
			ss += a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
		}
	}
    if(l<=ss && r>=ss && mx-mn>=x)
        c++;
    }
    }

    cout<<c<<endl;

}