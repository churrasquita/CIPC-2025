#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  string s;
  cin >> s;
  for(int i=0; i+6<s.size(); i++){
    if(s.substr(i, 7) == "1111111" or s.substr(i, 7) == "0000000"){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
