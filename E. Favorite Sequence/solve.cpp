// https://codeforces.com/group/TY5qlgX1RN/contest/624890/problem/E
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        deque<int> save;
        vector<int> result;

        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            save.push_back(a);
        }

        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                result.push_back(save.front());
                save.pop_front();
            } else {
                result.push_back(save.back());
                save.pop_back();
            }
        }

        for (int j = 0; j < n; j++) {
            cout << result[j] << " ";
        }
         cout << endl;

    }

    return 0;
}