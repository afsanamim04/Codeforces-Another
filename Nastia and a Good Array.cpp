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
 vector<int>v(n);
 for( int i = 0; i < n; ++i ) cin >> v[i];
 auto it = min_element(v.begin(),v.end());
 int minidx = distance(v.begin(), it);
 //cout << *it << nl;
 cout << n-1 << nl;
 int j = 1;
 for( int i = minidx+2; i <= n; ++i ){
   cout << minidx+1 << ' ' << i << ' ';
   cout << *it << ' ' << *it + j << nl;
   j++;
 }

  j = 1;
 for( int i = minidx; i > 0; --i ){
   cout << minidx+1 << ' ' << i << ' ';
   cout << *it << ' ' << *it + j << nl;
   j++;
 }

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


