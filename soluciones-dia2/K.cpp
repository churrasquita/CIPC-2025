#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int n;
  cin >> n;
  vector <int> a(n), b(n), c(n);  
  for(int i=0; i<n; i++) cin >> a[i];
  for(int i=0; i<n; i++) cin >> b[i];
  for(int i=0; i<n; i++) c[i] = a[i]-b[i];
  sort(c.begin(), c.end());
  ll ans = 0;
  for(int i=0; i<n-1; i++){
    int l=i+1, r=n-1, mid;
    while(l<r){
      mid = (l+r)/2;
      if(c[i] > -c[mid]) r = mid;
      else l = mid+1;
    }
    if(c[i] > -c[l]) ans += n-l;
  }
  cout << ans << '\n';

  return 0;
}
