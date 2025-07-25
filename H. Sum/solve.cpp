// https://codeforces.com/group/TY5qlgX1RN/contest/624890/problem/H

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {

        int a,b,c; cin >> a >> b >> c;

        map<int, int> sums = {{a, b+c}, {b, a+c}, {c, a+b}};

        bool unsolved = true;
        for (auto s: sums) {
            if (s.first == s.second) {
                cout << "YES" << endl;
                unsolved = false;
                break;
            }
        }
        if (unsolved) cout << "NO" << endl;
    }

    return 0;
}