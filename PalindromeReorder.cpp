#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int impares = 0;
    char medio;

    /* cómo recorrerlo sin el auto
    for (pair<char, int> par : freq) {
        char letra = par.first;
        int frecuencia = par.second;
    }
    */
    for (auto [letra, frecuencia] : freq) {
        if (frecuencia % 2 == 1) {
            impares++;
            medio = letra;
        }
    }

    if (impares > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    deque<char> resultado;
    if (impares) {
        for (int i = 0; i < freq[medio]; i++){
            resultado.push_back(medio);
        }
        freq[medio] = 0;
    }
    for (auto [letra, frecuencia] : freq) {
        for (int i = 0; i < frecuencia / 2; i++) {
            resultado.push_back(letra);
            resultado.push_front(letra);
        }
    }

    for (char caracter : resultado) {
        cout << caracter;
    } cout << endl;
}
