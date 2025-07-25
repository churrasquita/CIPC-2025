//https://codeforces.com/group/TY5qlgX1RN/contest/624890/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase; cin>> testcase;
    for (int i = 0; i<testcase; i++){
        int l; cin>> l;
        string str; cin>> str;

        map <char, int> frec; // frec of each balloon
        int puntos = 0;
        for(char c: str){
            if (frec[c] == 0){
                puntos += 2;
            } else{
                puntos += 1;
            }  
            frec[c] ++; 
        }
        cout<<puntos<<endl;
    }
    return 0;
}