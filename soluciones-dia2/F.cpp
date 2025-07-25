#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector <int> a(n);
  vector <int> b(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  ll l=0, r=2e9, mid;
  while(l<r){
    mid = (l+r+1)/2;
    ll powder = k;
    for(int i=0; i<n; i++){
      if(a[i]*mid > b[i]){
        powder -= a[i]*mid - b[i];
      }
      if(powder < 0) break;
    }

    if(powder >= 0){
      l = mid;
    }
    else r = mid-1;
  }
  cout << l << '\n';


  return 0;
}
