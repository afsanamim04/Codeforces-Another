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
    vector<ll>v(n);
    for( int i = 0; i < n; ++i ) cin >> v[i];
    map<ll,int>mp;
    mp[0]++;
    ll sum = 0;
    for( int i = 0; i < n; ++i ) {
        if( i % 2 == 0 ) sum += v[i];
        else sum -= v[i];
        if(mp.count(sum) && i != 0) {
            cout << "YES" << nl;
            return;
        }
        mp[sum]++;
    }
    cout << "NO" << nl;

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


