// https://codeforces.com/group/TY5qlgX1RN/contest/624890/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int c; cin >> c;
    int k; cin >> k;
    deque <int> dq;
    set<int> shown;

    int f; cin >> f;
    dq.push_front(f);
    shown.insert(f);

    for (int i = 0; i < c - 1; i++) {
        int f; cin >> f;
        if (!shown.count(f)) {
            dq.push_front(f);
            shown.insert(f);
        }

        if (dq.size() > k) {
            shown.erase(dq.back());
            dq.pop_back();
        }
    }

    cout << dq.size() << endl;

    for (int i: dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}