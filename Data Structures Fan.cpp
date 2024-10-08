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
  vector < int > v(n+5), pre(n+5);
  for( int i = 1; i <= n; ++i )
    cin >> v[i];
  string s;
  cin >> s;
  s = '0' + s;
  vector<int> ans(2, 0);
  pre[0] = 0;
  for( int i = 1; i <= n; ++i ){
         ans[s[i] - '0'] ^= v[i];
    pre[i] = pre[i-1] ^ v[i];
  }
    int p = 0;
  int q;
  cin >> q;
  while( q-- ){
    int tp;
    cin >> tp;
    if( tp == 1 ){
        int l,r;
        cin >> l >> r;
        p ^= (pre[r] ^ pre[l-1]);
       // xor1 ^= (pre[r] ^ pre[l-1]);
    }
    else{
        int i;
        cin >> i;
        if( i == 0){
            cout << ( ans[i] ^ p) <<' ';
        }
        else
        {
            cout << ( ans[i] ^ p ) <<' ';
        }

    }
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



