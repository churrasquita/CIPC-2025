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
typedef vector<vpi> vvpi;
typedef tuple<int, int, int> tiii;
 
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
    int n, m; cin >> n >> m;
    unordered_map<int, pair<int, vi>> next_charge; //idx, charging 
    vi a(n); rep(i, 0 , n) {
        cin >> a[i]; 
        next_charge[i].fi = 0;
    }
    
    // por cada batería guardar idx y cuándo se cargan;
    vpi charg;
    rep(i, 0 , m) {
        int u, v; cin >> u >> v;
        v--;
        next_charge[v].se.pb(u);
        charg.pb({u, v});
    }

    priority_queue<tiii, vector<tiii>, greater<tiii> > q; //next charge, a[i], i

    //inicializar
    rep(i, 0 , n) {
        if (sz(next_charge[i].se) == 0) {
            q.push({1e9 + 1, a[i], i});
        } else {
            q.push({next_charge[i].se[0], a[i], i});
            next_charge[i].fi++;
        }
    }

    ll dist = 0;
    rep(i, 0,  m) {
        auto [u, v] = charg[i];
        //usar baterías hasta llegar
        while(!q.empty()) {
            auto [nxt, dd, idx] = q.top(); q.pop();
            if (dist + dd > u) {
                int rest = dist + dd - u;
                dist = u;
                //deb2(rest, "aaa");
                q.push({nxt, rest, idx});
                break;
            }
            dist += dd;
        }
        if (dist < u) {
            break; // no se puede llegar más
        }
        //cargar y poner siguiente
        if (!q.empty()) {
            auto [nxt, dd, idx] = q.top();
            if (idx == v) q.pop();
        }

        if (sz(next_charge[v].se) != next_charge[v].fi) { //quedan más
            q.push({next_charge[v].se[next_charge[v].fi], a[v], v});
            next_charge[v].fi++;
        } else {
            q.push({1e9 + 1, a[v], v});
        }
    }
    //usar rest
    while(!q.empty()) {
        auto [nxt, d, idx] = q.top(); q.pop();
        dist += d;
    }
    cout << dist << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int puntos_a_probar = 1;
    cin >> puntos_a_probar;
    while (puntos_a_probar--) {
        probar_punto();
    }
    

    return 0;
    cout << "haiiiii ^_^ hi!! hiiiiii <3 haiiiiii hii :3" << endl;
}

