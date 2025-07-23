#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>> n;
    long long fx= 0; 
 
    if (n%2== 0) fx = (n/2); 
    else fx = (((n-1)/2)-n); 
 
    cout<< fx; 
    return 0; 
}