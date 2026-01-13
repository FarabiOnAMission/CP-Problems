#include <bits/stdc++.h>
using namespace std;


int countVK(const string& s) {
    int cnt = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == 'V' && s[i] == 'K') {
            cnt++;
            i++;
        }
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;

    int baseVK = countVK(s);
    int maxVK = baseVK;

    for (int i = 0; i < s.size(); i++) {
        char original = s[i];


        s[i] = (s[i] == 'V') ? 'K' : 'V';

        int newVK = countVK(s);
        maxVK = max(maxVK, newVK);

        s[i] = original;
    }

    cout << maxVK << endl;

    return 0;
}
