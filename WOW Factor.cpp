#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
  string s;
  cin >> s;
  ll n = s.size(), cnt = 0, zero = 0;
  for( ll i = 0; i < n; ++i ){
    if( s[i] == 'v' ) cnt++;
    else {
        zero += max(0LL,(cnt - 1));
        cnt = 0;
    }
  }
  if( cnt != 0 ){
    zero += cnt -1;
    cnt = 0;
  }
 // cout << zero << nl;
  ll z = 0, ans = 0;
  for( ll i = 0; i < n; ++i ){
    if( s[i] == 'v' ){
        cnt++;
    }
    else{
        z += max(0LL,(cnt - 1));
        cnt = 0;
       // cout << z << ' ' << zero-z << nl;
        ans += ( z * (zero - z));
    }
  }
  cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;
    //cin >> t;
    //while( t-- )
    {
        sol();
    }
    return 0;
}


