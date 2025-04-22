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
  int ans = 0, cnt = 0;
  for( int i = 0; i < s.size(); ++i ){
    if( s[i] != '0' ){
        ans = max( cnt, ans );
    }
    else cnt++;
  }
  ans++;
  cout << s.size() - ans << nl;
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


