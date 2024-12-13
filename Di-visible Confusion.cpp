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
 vector<int>v(n+5);
 bool ans = false;
 for( int i = 1; i <= n; ++i ) cin >> v[i];
 for( int i = 1; i <= n; ++i ){
    bool flg = false;
    for( int j = 2; j <= i+1; ++j ){
        if( v[i] % j != 0 ){
            flg = true;
            break;
        }
    }
    if( flg == false ){
        ans = true;
        break;
    }
 }
 if(ans) cout << "NO" << nl;
 else cout << "YES" << nl;
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


