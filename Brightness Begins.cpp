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
  ll k;
  cin >> k;
  ll l = 1, r = 1e18+1e9+123;
  ll ans = -1;
  while( l <= r ){
     ll mid = (l + r) / 2;
        ll perfectSquares = (ll)sqrtl(mid); // Count of perfect squares up to mid
        if ((mid - perfectSquares) >= k)
        {
            ans = mid;
            r = mid - 1; // Try to find smaller n
        }
        else if (perfectSquares > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
  }
  cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}



