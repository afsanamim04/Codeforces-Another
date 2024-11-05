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
    int n;
    cin >> n;
    vector <ll>v(n);
    for( int i = 0; i < n; ++i ) cin >> v[i];
    sort(all(v));
    int f = INT_MAX;
    for( int i = n -1; i >= 0; --i )
    {
        int ans = INT_MAX;
        int l = 0, r = n-1;
        while( l <= r )
        {
            int mid = (l+r) / 2;
            if( (v[mid] + v[mid+1] ) > v[i] )
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        ans = ( n-1-i ) + ans;
        f = min( f ,(ans));
    }
    cout << f << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        sol();
    }
    return 0;
}



