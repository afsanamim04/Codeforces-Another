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
    string s;
    cin >> s;
    if( s[0] == '1' || s[n-1] == '1'){
        cout << "YES" << nl;
        return;
    }
    else{
        for( int i = 0; i < n-1; ++i ){
            if( s[i] == '1' && s[i+1] == '1'){
                cout << "YES" << nl;
                return;
            }
        }
        cout << "NO" << nl;
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



