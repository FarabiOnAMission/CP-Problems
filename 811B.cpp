#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (k--) {
        int a, b, c;
        cin >> a >> b >> c;
        int val = arr[c - 1];
        int cnt = 0;

        for (int i = a - 1; i < b; i++) {
            if (arr[i] < val)
                cnt++;
        }

        if (a + cnt == c)
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }

    return 0;
}
