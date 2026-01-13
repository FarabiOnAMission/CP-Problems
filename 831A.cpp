#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> seen;
    char prev = '\0';
    bool valid = true;

    for (char ch : s) {
        if (ch != prev) {
            if (seen.count(ch)) {
                valid = false;
                break;
            }
            seen.insert(ch);
        }
        prev = ch;
    }

    if (valid)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
