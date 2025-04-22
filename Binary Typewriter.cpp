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
  string s;
  cin >> s;
  int a = 0;
  for( int i = 0; i < n; ++i ){
    if( s[i] == '1' ){
        a = i;
        break;
    }
  }
  //cout << a << nl;
  int p = 0; bool flg = 0, sesh = 0;
  for( int i = a; i < n; ++i ){
    if( s[i] == '0'  ){
            flg = 1;
            p = i;
    }
    if( flg == 1 && s[i] != '0' ){
        p = i-1;
        sesh = 1;
        break;
    }
  }
  if(s[n-1] == '0' && sesh == 0 ){
        p = n-1;
    }
   // cout << p << nl;
  reverse(s.begin()+a, s.begin()+p+1);
  //cout << s << nl;
  int c = 0;
  if( s[0] == '1' ) c++;
  for( int i = 0; i < n-1; ++i ){
    if( s[i] != s[i+1]) c++;
  }
  cout << n + c << nl;
 //cout << p << nl;
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
