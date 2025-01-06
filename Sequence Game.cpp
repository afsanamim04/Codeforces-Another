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
  int n;
  cin >> n;
  vector<int>v(n),ans;
  for( int i = 0; i < n; ++i ) cin >> v[i];
  ans.pb(v[0]);
  for( int i = 1; i < n; ++i ){
    if( v[i-1] > v[i] ){
        ans.pb(v[i]);
    }
    ans.pb(v[i]);
  }
  cout << ans.size() << nl;
  for( auto it: ans ) cout << it << ' '; cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while( t-- )
    {
        sol();
    }
    return 0;
}


