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
  if( n % 2 ){
    cout << n << ' ';
    for( int i = 1; i <= n-1; ++i )
        cout << i << ' ';
         cout << nl;
  }
  else
  cout << "-1" << nl;

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


