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
  vector<vector<int>>v(n);
  vector<int>a;
  map < int, int > mp;
  for( int i = 0; i < n; ++i){
    int m;
    cin >> m;
    a.pb(m);
    v[i].resize(m);
    for( int j = 0; j < m; ++j ){
        cin >> v[i][j];
        mp[v[i][j]]++;
    }
  }

  for( int i = 0; i < n; ++i ){
        bool flg = true;
    for( int j = 0; j < a[i]; ++j ){
        mp[v[i][j]]--;
        if(!mp[v[i][j]]){
            mp[v[i][j]]++;
            flg = false;
            break;
        }
        else
            mp[v[i][j]]++;

    }
    if( flg ){
            cout << "YES" << nl;
            return;
        }
  }
  cout << "NO" << nl;

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



