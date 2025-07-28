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
    int t; cin >> t; 
    while (t--) {
        ll n, k; cin >> n >> k;
        vl a(n);
        rep(i, n) cin >> a[i];
        vi b(n - 1);
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] < 2*a[i+1]) b[i] = 1;
            else b[i] = 0;
        }
        ll res = 0;
        ll act_sum = 0;

        //iniciar
        rep(i, k) {
            act_sum += b[i];
        }
        //sliding window
        repx(i, k, n-1) {
            if (act_sum == k) res++;
            act_sum +=b[i]; 
            act_sum -=b[i-k];
        }
        if (act_sum == k) res++;
        cout << res << endl;
    }

    return 0;
    cout << "haiiiii ^_^ hi!! hiiiiii <3 haiiiiii hii :3" << endl;
}
