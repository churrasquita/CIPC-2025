#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
  int n, m, q;
  cin >> n >> m >> q;
  vector <int> b(m);
  for(int i=0; i<m; i++) cin >> b[i];
  sort(b.begin(), b.end());
  while(q--){
    int x;
    cin >> x;
    auto it = lower_bound(b.begin(), b.end(), x);
    int idx = it-b.begin();
    if(idx == 0){
      cout << b[0]-1 << '\n';
    }
    else if(idx == m){
      cout << n-b.back() << '\n';
    }
    else{
      int len = b[idx]-b[idx-1];
      cout << len/2 << '\n';
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t;
  cin >> t;
  while(t--) solve();

  return 0;
}
