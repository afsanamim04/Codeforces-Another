
// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

const int mx = 1e5+123;
vector<int>adj[mx];
int vis[mx];

void DFS( int node )
{
  vis[node] = 1;

  for( auto u: adj[node]){
    if( vis[u] == 0 ){
        DFS(u);
    }
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;

    for( int i = 1; i <= m; i++ ){
        int x,y;
        cin >> x >> y;

        adj[x].pb(y);
        adj[y].pb(x);
    }


     int cnt = 0;

    for( int i = 1; i <= n; i++ ){
        if( vis[i] == 0 ){
            cnt++;
            DFS(i);
        }
    }
    cout << (1LL << (n-cnt)) << nl;
    return 0;
}


