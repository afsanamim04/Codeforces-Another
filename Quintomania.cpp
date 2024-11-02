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
  int n;
  cin >> n;
  vector< int > v( n + 5);
  for( int i = 1; i <= n; ++i ){
    cin >> v[i];
  }
  for( int i = 1; i < n; i++ ){
    if(( abs(v[i] - v[i+1]) != 5 ) && ( abs(v[i] - v[i+1]) != 7 )){
        cout << "NO" << nl;
        return;
    }
  }
  cout << "YES" << nl;
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



