// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
typedef long long int ll;
using namespace std;

void sol() {
     ll n, m;
    cin >> n >> m;
    vector<string> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    ll ans = 0;
    vector<vector<bool>> check(n, vector<bool>(m, 0));
    ll p = 0, q = 0;
    while (p < min(n, m) / 2)
    {
        ll i = p, j = q;
        string str = "";
        while (j < m && !check[i][j])
        {
            str.push_back(vc[i][j]);
            check[i][j] = 1;
            j++;
        }
        j--;
        i++;
        while (i < n && !check[i][j])
        {
            str.push_back(vc[i][j]);
            check[i][j] = 1;
            i++;
        }
        i--;
        j--;
        while (j >= 0 && !check[i][j])
        {
            str.push_back(vc[i][j]);
            check[i][j] = 1;
            j--;
        }
        j++;
        i--;
        while (i >= 0 && !check[i][j])
        {
            str.push_back(vc[i][j]);
            check[i][j] = 1;
            i--;
        }

        ll sz = str.size();
        for (ll i = 0; i < sz - 3; i++)
        {
            if (str[i] == '1' && str[i + 1] == '5' && str[i + 2] == '4' && str[i + 3] == '3')
            {
                ans++;
            }
        }

        if (sz > 3)
        {
            if (str[sz - 3] == '1' && str[sz - 2] == '5' && str[sz - 1] == '4' && str[0] == '3')
            {
                ans++;
            }
            if (str[sz - 2] == '1' && str[sz - 1] == '5' && str[0] == '4' && str[1] == '3')
            {
                ans++;
            }
            if (str[sz - 1] == '1' && str[0] == '5' && str[1] == '4' && str[2] == '3')
            {
                ans++;
            }
        }
        p++;
        q++;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}
