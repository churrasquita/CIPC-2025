#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int c;
    cin >> c;
 
    for (int i = 0; i < c; i++) {
        int t = 0;
        string s;
        cin >> s;
        int z = 0;
        int o = 0;
 
        
        for (int i = 0; i < s.length(); i++) {
            (s[i] == '0') ? z++:o++;
        }
 
        if (z == 0 || o == 0) {
            if (z == 0) cout << o << endl;
            else cout << z << endl;
            continue;
        }
        (z > o) ? t = z - o: t = o - z;
 
        int resultado = 0;
        if (t != 0) {
            resultado += 2 - z - o;
            t = resultado * -1;
        }
 
        cout << t << endl;
    }
 
    return 0;
}