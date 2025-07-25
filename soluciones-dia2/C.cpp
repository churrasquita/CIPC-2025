#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  stack <int> z;
  vector <pair<int,int>> pairs;
  for(int i=0; i<n; i++){
    if(s[i] == '(') z.push(i);
    else{
      int j = z.top();
      z.pop();
      pairs.push_back({j,i});
    }
  }
  vector <int> ans;
  for(int i=0; i<k/2; i++){
    ans.push_back(pairs[i].first);
    ans.push_back(pairs[i].second);
  }
  sort(ans.begin(), ans.end());
  for(int i : ans){
    cout << s[i];
  }
  cout << '\n';

  return 0;
}
