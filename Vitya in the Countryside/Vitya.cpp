#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int c;
    cin >> c;
 
    if (c == 1) {
        string x;
        cin >> x;
        if (x == "15") cout << "DOWN";
        else if (x == "0") cout << "UP";
        else cout << "-1";
    } else {
        vector<string> x;
        for (int i = 0; i < c; i++) {
            string gr;
            cin >> gr;
            x.push_back(gr);
        }
        if (x[x.size()-1] == "15") cout << "DOWN";
        else if (x[x.size()-1] == "0") cout << "UP";
        else if (stoi(x[x.size()-1]) == stoi(x[x.size()-2]) - 1) cout << "DOWN";
        else if (stoi(x[x.size()-1]) == stoi(x[x.size()-2]) + 1) cout << "UP";
        else cout << "-1";
    }
 
    return 0;
}