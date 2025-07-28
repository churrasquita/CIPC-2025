#include<bits/stdc++.h> 
using namespace std;

int n, k;
string s;

int maxlen(char x) {
    int left = 0, right = 0;
    int cambios = 0;
    int maxi = 0;
    while (right < n) {
        if (s[right] != x) cambios++;
        while (cambios > k) {
            if (s[left] != x) {
                cambios --;
            }
            left ++;
        }
        maxi = max(maxi, right - left + 1);
        right ++;
    }
    return maxi;
}

int main() {
    cin >> n >> k >> s;
    int maxa = maxlen('a');
    int maxb = maxlen('b');
    cout << max(maxa, maxb) << endl;
    return 0;
}

