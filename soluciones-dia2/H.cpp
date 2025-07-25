#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
  int n, k;
  cin >> n >> k;
  vector <int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  vector <int> b(n);
  for(int i=0; i<n-1; i++){
    b[i] = a[i] < 2*a[i+1];
  }
  int ones = 0;
  for(int i=0; i<k-1; i++) ones += b[i] == 1;
  int ans=0;
  for(int i=k-1; i<n; i++){
    ones += b[i]==1;
    if(ones == k) ans++;
    ones -= b[i-k+1]==1;
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
