#include <bits/stdc++.h>
using namespace std;
 
bool exists(vector<string> og, string pais){
    for(int i = 0; i<og.size(); i++){
        if (og[i]== pais) return true;
    }
    return false; 
}
 
int main(){
    vector<string> og = {"ch", "lp", "cbba", "or", "pt", "tja", "scz", "be", "pd"};
    int n;
    cin>> n;
    string pais; 
    int notIn = 0; 
    for (int i = 0; i<n; i++){
        cin>> pais;
        if(!exists(og,pais)) notIn ++;
 
    }
    cout<< notIn; 
    return 0; 
}