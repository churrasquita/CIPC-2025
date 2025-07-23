#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> people = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    vector<int> amountPeople= {1,1,1,1,1};
    int soda = 0;
    int nth;
    cin >> nth;
    int index = 0;
    while(soda!=nth){
        if(index==5) index=0;
        for(int i = 0; i<amountPeople[index];i++){
            soda++;
            if(soda==nth) {
                    cout << people[index]+ "\n";
                    return 0;
            } //hacer impresion y terminar
        }
        amountPeople[index]*=2;
        index++;
    }
    return 0;
}

