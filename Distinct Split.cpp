// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char,int> mp1, mp2;
    int ans = 0;


    for (int i = 0; i < n; ++i) {
        mp2[s[i]]++;
    }


    for (int i = 0; i < n - 1; i++) {

        mp2[s[i]]--;
        if (mp2[s[i]] == 0) {
            mp2.erase(s[i]);
        }
        mp1[s[i]]++;


        int cal = mp1.size() + mp2.size();
        ans = max(ans, cal);
    }

    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        sol();
    }

    return 0;
}
