#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >>n >> k;
    string text;
    cin >> text;
 
    if(n==k) { //si se piden mismas cantidades retorna lo mismo.
        cout << text;
        return 0;
    }

    // vectores para guardar los índices de los pares
    vector<int> index;
    vector <pair<int,int>> pares; 
    for (int i = 0; i<n; i++){
        if(text[i] == '('){
            index.push_back(i);
        }else if(text[i] == ')'){
            pares.push_back({index.back(), i});
            index.pop_back();
        }
    }
    vector<int> r;
    for (int i = 0; i<(k/2); i++){
        r.push_back(pares[i].first);
        r.push_back(pares[i].second);
    }
    sort(r.begin(), r.end());
    
    string nuevo = "";
    for(int i= 0; i<k; i++){
        nuevo+= text[r[i]];
    }
    cout<< nuevo;
    return 0;
}