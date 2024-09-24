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
 ll n, k;
 cin >> n >> k;

 ll p = n - k + 1;
 ll q = max ( 1ll , p);
 ll o = ( n - q + 1 ) / 2;
 if( q % 2 == 1 && n%2 == 1 )
    o++;
 if(o%2 == 0 ) cout << "Yes" << nl;
 else cout << "No" << nl;
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



