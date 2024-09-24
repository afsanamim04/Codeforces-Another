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
  int n , m ;
  cin >> n >> m;
  vector < int > v(n+5);
  for( int i = 1; i <= n; ++i ) cin >> v[i];
  int mx = *max_element( v .begin(), v.end() );
  while( m-- ){
    char c;
    cin >> c;
    int l , r;
    cin >> l >> r;
    if( l <= mx && r >= mx ){
        if( c == '+')
            mx++;
        else mx--;
    }
    cout << mx <<' ';
  }
  cout << nl;
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


