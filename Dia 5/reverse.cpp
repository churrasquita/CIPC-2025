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
typedef tuple<int, int, int> tiii;
 
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define repx(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define pb push_back
#define mk make_pair
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m; cin >> n >> m;
    vvi trees(n, vi (m));
    rep(i, n) rep(j, m) cin >> trees[i][j];

    rep(i, n) rep(j, m) {
        // si es casilla par
        if ((i + j) % 2 == 0) {
            if (trees[i][j] % 2 != 0) {
                trees[i][j] ++; //ahora es par
            }
        } else {
            if (trees[i][j] % 2 == 0) {
                trees[i][j] ++;
            }
        }
    }
    
    
    rep(i, n) {
        rep (j, m) cout << trees[i][j] << " ";
        cout << endl;
    }

    return 0;
    cout << "haiiiii ^_^ hi!! hiiiiii <3 haiiiiii hii :3" << endl;
}

