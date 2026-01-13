#include <bits/stdc++.h>
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main() {
    long long n, x;
    cin >> n >> x;
    unordered_map<long long, long long,custom_hash> ump;
    ump[0] = 1;

    long long sum = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        sum += a;
        ans += ump[sum - x];
        ump[sum]++;
    }

    cout << ans << '\n';
}
