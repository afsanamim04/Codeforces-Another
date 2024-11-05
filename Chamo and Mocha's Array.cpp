// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
const int N = 1e5+10;
int a[N];
void sol()
{
    int n;
    cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        if(n==2)cout<<min(a[1],a[2])<<"\n";
        else{
            int ans = min(a[1],a[2]);
            for(int i=1;i<=n-2;i++){
                vector<int> tmp;
                for(int k=0;k<=2;k++)
                    tmp.push_back(a[i+k]);
                sort(tmp.begin(),tmp.end());
                ans = max(ans,tmp[1]);
            }
            cout<<ans<<"\n";
        }
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



