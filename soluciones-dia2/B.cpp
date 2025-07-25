#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
  string s;
  cin >> s;
  for(int i=1; i<=s.size(); i++){
    string ss = s.substr(0, i);
    if(ss+ss==s){
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t;
  cin >> t;
  while(t--) solve();

  return 0;
}
