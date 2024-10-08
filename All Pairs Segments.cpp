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
    vector<ll>v(n+5);
    for( ll i = 1; i <= n; ++i )
    {
        cin >> v[i];
    }
    map< ll, ll > mp;
    mp[n-1]++;
    for(ll i = 2; i <= n; ++i )
    {
        ll index = (i-1)*(n-i+1);
        ll curindex = ((i-1)*(n-i+1))+(n-i);
        mp[index]+= (v[i]-v[i-1]) - 1;
        mp[curindex]+=1;

    }

    while( k-- )
    {
        ll ki;
        cin >> ki;
        cout << mp[ki] << ' ';

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



