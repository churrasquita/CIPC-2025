#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
  int n;
  cin >> n;
  vector <pair<int,int>> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i].first;
  }
  for(int i=0; i<n; i++){
    cin >> a[i].second;
  }
  int add=0, sub=0;
  int x=0, y=0;
  for(int i=0; i<n; i++){
    if(a[i] == pair{1,1}) add++;
    else if(a[i] == pair{-1,-1}) sub++;
    else if(a[i].first == 1) x++;
    else if(a[i].second == 1) y++;
  }

  int rep = sub+add;
  x -= sub;
  y += add;
  int ans = min(x,y);
  while(rep--){
    x++;
    y--;
    ans = max(ans, min(x, y));
  }
  cout << ans << '\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t;
  cin >> t;
  while(t--) solve();

  return 0;
}
