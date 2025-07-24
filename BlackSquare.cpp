#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    vector<int> a(n); // vector de calorias
    for(int i = 0; i<4; i ++){
        cin>> a[i];
    }
    string appears;
    cin>> appears; // string de apariciones

    int totalCalorias = 0;

    for(int i = 0; i<appears.length(); i++){
        if (appears[i] == '1'){
            totalCalorias += a[0];
        } else if(appears[i] == '2'){
            totalCalorias += a[1];
        } else if(appears[i] == '3'){
            totalCalorias += a[2];
        } else{
            totalCalorias += a[3];
        }
    }
    cout<< totalCalorias;
    return 0;

}