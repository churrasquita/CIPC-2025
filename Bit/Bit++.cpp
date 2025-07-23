#include <bits/stdc++.h>
using namespace std;
 
int main() {
        
    int c;
    cin >> c;
 
    int final = 0;
 
    for (int i = 0; i < c; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < x.length(); j++) {
            if (x[j] == '+') {
                final++;
                break;
            } else if (x[j] == '-') {
                final --;
                break;
            }
        }
    }
    cout << final;
 
    return 0;
}