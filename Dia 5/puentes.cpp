#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef string str;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<vpi> vvpi;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;

 
#define fi first
#define se second
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repr(i, a, b) for(int i = (int)a; i >= (int)b; i--)
#define pb push_back
#define mk make_pair
#define printv(v) for(auto x: v){cout<<x<<" ";}cout<<endl
#define printm(v) for(auto w: v){printv(w);}cout<<endl
#define deb1(s) cout<<s<<endl
#define deb2(s, s2) cout<<s<<" "<<s2<<endl
#define deb3(s, s2, s3) cout<<s<<" "<<s2<<" "<<s3<<endl
#define LINE deb1("=====================")
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define allr(x) (x).rbegin(), (x).rend()
#define endl "\n"

void probar_punto() {
    int n, m;
    cin >> n >> m;
    vpl islas(n);
    rep(i, 0, n){
        ll x, y;
        cin >> x >> y;
        islas[i]={x,y};
    }
  sort(islas.begin(),islas.end());
  vpl puentes;
  rep(i, 0, m) {
    ll p; cin >> p;
    puentes.pb({p, i + 1});
  }
  sort(puentes.begin(),puentes.end());

  vector<tlll> dists;
  rep(i,0, n-1){
    ll dist1 = islas[i+1].fi - islas[i].se;
    ll dist2 = islas[i+1].se - islas[i].fi;
    dists.pb({dist1, dist2, i});
    //deb3(dist1, dist2, i);
  }
  sort(all(dists));

  vl ans(n- 1, 0);
  set<tlll> sirven;
  int idx = 0;
  rep(i, 0, m) {
    // agregar todos los que sirven
    //deb2(get<0>(dists[idx]), get<1>(dists[idx]));
    while(idx < (n - 1) && get<0>(dists[idx]) <= puentes[i].fi && get<1>(dists[idx]) >= puentes[i].fi) {
        auto[ai, bi, ci] = dists[idx];
        //deb3(ai, bi, ci);
        sirven.insert({bi, ai, ci});
        idx++;
    } 
    if (sirven.empty()) continue;
    auto [b, a, c] = *sirven.begin();
    //deb3(a, b, c);
    //deb1(puentes[i].fi);
    if (a <= puentes[i].fi && b >= puentes[i].fi) {
        // sirve
        //cout << "fhjksdjkhf" << endl;
        ans[c] = puentes[i].se;
        sirven.erase(sirven.begin());
    } 
    else if (b <= puentes[i].fi) {
        cout << "No" << endl;
        return; 
    }
  }
  rep(i, 0, n - 1) {
    if (ans[i] == 0) {
        cout << "No" << endl;
        return;
    }
  }
  cout << "Yes" << endl;
  printv(ans);

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int puntos_a_probar = 1;
    //cin >> puntos_a_probar;
    while (puntos_a_probar--) {
        probar_punto();
    }
    

    return 0;
    cout << "haiiiii ^_^ hi!! hiiiiii <3 haiiiiii hii :3" << endl;
}

