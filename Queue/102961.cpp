#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<long long, long long, int>> customers(n);
    for (int i = 0; i < n; ++i) {
        long long a, b;
        cin >> a >> b;
        customers[i] = {a, b, i};
    }

    sort(customers.begin(), customers.end());

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

    vector<int> ra(n);
    int rc = 0;

    for (auto [start, end, idx] : customers)
    {
        if(!pq.empty() && pq.top().first < start)
        {
            int rn=pq.top().second;
            pq.pop();
            pq.push({end,rn});
            ra[idx]=rn;

        }
        else
        {
            rc++;
            pq.push({end,rc});
            ra[idx]=rc;
        }
    }

    cout<<rc<<endl;
    for(int x: ra)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}
