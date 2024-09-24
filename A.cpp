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
  int n, k;
  cin >> n >> k;
  int sum = 0, cnt = 0;
  for( int i = 0; i < n; ++i ){
    int x;
    cin >> x;
    if( x >= k)
        sum += x;
    else if( x == 0 && sum > 0  ){ cnt++; sum--;}
  }
  cout << cnt << nl;
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



