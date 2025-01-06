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
  int n, m;
  cin >> n >> m;
  vector<string>v;
  for( int i = 0; i < n; ++i ){
    string s;
    cin >> s;
    v.pb(s);
  }
   string ans = "vika";
   int k = 0;
  for( int i = 0; i < m; ++i ){
    for( int j = 0; j < n; ++j ){
        if( v[j][i] == ans[k] ){
            k++;
            break;
        }
    }
  }
  //cout << k << nl;
  if( k == 4) cout << "YES" << nl;
  else cout << "NO" << nl;
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


