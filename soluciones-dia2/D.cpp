#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  vector <int> a(4);
  for(int i=0; i<4; i++) cin >> a[i];
  string game;
  cin >> game;
  int ans=0;
  for(char c : game){
    int d = c-'1';
    ans += a[d];
  }
  cout << ans << '\n';
}
