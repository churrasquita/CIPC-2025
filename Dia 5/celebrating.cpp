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
    vi b(m + 1, 0);
    rep(i, n) {
        int ai; cin >> ai;
        b[ai] ++;
    }
    for (int i = m - 1; i > 0; i--) {
        b[i] += b[i + 1];
    }
    repx(i,1, m + 1) {
        cout << b[i] << " ";
    }
    cout << endl;
    

    return 0;
}

