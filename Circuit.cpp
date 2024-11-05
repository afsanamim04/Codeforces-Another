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
   int cnt = 0, c = 0;
   for( int i = 0; i < 2*n; ++i ){
    bool x; cin >> x;
    if(x) cnt++;
    else c++;
   }
   if( cnt % 2 ? 1 : 0 ){
    cout << 1 << ' ';
   }
   else{
    cout << 0 << ' ';
   }
   cout << min( c, cnt) << nl;

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



