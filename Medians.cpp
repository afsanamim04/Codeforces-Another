// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol(){
  int n,k;
  cin >> n >> k;
  if( n == 1 ) cout << 1 << nl << 1 << nl;
  else if( n == k || k == 1 ) cout << -1 << nl;
  else {
    if( k % 2 ){
        cout << 4 << nl;
        cout << 1 <<' ' << 2 << ' ' << k << ' ' << k+1 << ' ' << n << nl;
    }
    else{
        cout << 3 << nl;
        cout << 1 << ' ' << k << ' ' << k+1 << nl;
    }
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        sol();
    }
    return 0;
}



