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
  map<char,int>mp;
  int cnt = 0, ans = 0;
  for( int i = 0; i < n; ++i ){
    if( !mp[s[i]] ){
        mp[s[i]]++;
        cnt++;
    }
    ans += cnt;
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



