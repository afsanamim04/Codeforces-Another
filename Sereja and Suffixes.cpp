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
  int n, m;
  cin >> n >> m;
  vector<int> v(n+5), uv, ans;
  map< int, int > mp;
  for( int i = 0; i < n; ++i ){
    cin >> v[i];
    mp[v[i]]++;
  }
  //sort(v.begin(), v.end());
  //auto it = std::unique(v.begin(), v.end());
  //for( int i = 0; i < it; ++i ) uv.pb(v[i]);
  int l = mp.size();
  ans.pb(l);
  for( int i = 1; i < n-1; ++i ){
    mp[v[i-1]]--;
    if(mp[v[i-1]] == 0 ) l--;
    ans.pb(l);
  }
  ans.pb(1);
  while( m-- ){
    int p;
    cin >> p;
    cout << ans[p-1] << nl;
  }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ll t;
    //cin >> t;
    //while (t--)
    {
        sol();
    }
    return 0;
}



