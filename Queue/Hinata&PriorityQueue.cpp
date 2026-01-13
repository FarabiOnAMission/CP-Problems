#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<long long> pq;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        pq.push(x);

        if (i < 2) {
            cout << -1 << '\n';
        } else {
            long long first = pq.top(); pq.pop();
            long long second = pq.top(); pq.pop();
            long long third = pq.top(); pq.pop();

            long long prod = first * second * third;
            cout << prod << '\n';

            pq.push(first);
            pq.push(second);
            pq.push(third);
        }
    }

    return 0;
}
