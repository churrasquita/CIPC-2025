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
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, k; cin >> n >> k;

    vector<pii> fila;
    rep (i, n) {
        int c, t; cin >> c >> t;
        fila.pb({c, t});
    }
    priority_queue<ll, vector<ll>, greater<ll>> pq; // tiempo d espera empleados
    priority_queue<ll, vector<ll>, greater<ll>> people; // personas
    int maxi = 0;
    rep(i, k) pq.push(0);
    

    for (auto [c, t] : fila) {
        // sacar a los q ya no estan en c
        //if (!people.empty()) cout << "c " << c << " p " << people.top() << endl;
        while (!people.empty() && people.top() <= c) {
            people.pop();
            //cout << "next" << people.top() << endl;
        }
        ll x = pq.top(); pq.pop();

        if (x <= c) { // lo atienden altiro
            pq.push(c + t);
            people.push(c + t);
        }
        else { // dps
            pq.push(x + t);
            people.push(x + t);
        }
        int act = people.size();
        maxi = max(maxi, act);

        //cout << "c: " << c << " act: " << act << endl;
    }

    cout << maxi << endl;




    return 0;
    cout << "sigma sigma boy" << "\n";
}