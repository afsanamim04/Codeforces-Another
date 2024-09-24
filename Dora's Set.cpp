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
  int l , r;
  cin >> l >> r;
  if( ! l % 2 ) l++;
  int ans;
  if( r % 2 ){
     ans = ( r - l ) + 1;
    int p = ans % 4;
    ans /= 4;
    if( p == 3 )
        ans++;
  }

  else {
     ans = ( r - l ) + 1;
    ans /= 4;
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



