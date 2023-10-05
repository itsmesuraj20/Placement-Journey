#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll s = 0;
        for (int i = 0; i < n; i++)
              s += a[i];
        if (k == 1) {
            if (a[0] >= b[m-1])
                cout << s;
            else
                cout << (s - a[0] + b[m-1]);
        } else if (k == 2) {
            if (a[0] < b[m-1]) {
                s = s - a[0] + b[m-1];
                s = s + b[0] - max(b[m-1], a[n-1]);
            }
            else
                s = s - a[n-1] + b[0];
            cout << s;
        } else {
            ll x = min(a[0], b[0]);
            ll y = max(a[n-1], b[m-1]);
            ll s1 = 0;
            if (a[0] < b[m-1]) {
                s = s - a[0] + b[m-1];
                s1 = s;
                s = s + min(a[0], b[0]) - max(b[m-1], a[n-1]);
            }
            else
                s = s - a[n-1] + b[0];
            k -= 2;
            if (k % 2 == 1)
                cout << s1;
            else
                cout << s;
        }
        cout << endl;
    }
    return 0;
}
