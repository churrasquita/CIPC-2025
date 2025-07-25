#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);


  ll n, p, w, d;
  cin >> n >> p >> w >> d;

  for(ll y=0; y<w; y++){
    ll x = p-y*d;
    if(x < 0) continue;
    if(x%w != 0) continue;
    x /= w;
    if(x+y <= n){
      cout << x << ' ' << y << ' ' << n-x-y << '\n';
      return 0;
    }
  }
  cout << -1 << '\n';
  return 0;
}
