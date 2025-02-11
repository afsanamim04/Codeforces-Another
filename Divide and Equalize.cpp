#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
const int mx = 1e7+123;
bitset<mx>isprime;
vector<int>primes;

void sieve(){
    for( int i = 3; i <= mx; i +=2 ) isprime[i] = 1;
    for( int i = 3; i*i <= mx; i+=2 ){
        if( isprime[i]){
            for( int j = i*i; j <= mx; j += i ){
                isprime[j] = 0;
            }
        }
    }
    isprime[2] = 1;
    primes.push_back(2);
    for( int i = 3; i <= mx; i += 2 ){
        if(isprime[i])
            primes.push_back(i);
    }
}
vector<int> prime_factors(int n) {
    vector<int> factors;
    for (auto p : primes) {
        if (p * p > n) break;
        if (n % p == 0) {
            while (n % p == 0) {
                factors.push_back(p);
                n /= p;
            }
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while( t-- ){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> factor_list;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        vector<int> temp_factors = prime_factors(v[i]);
        factor_list.insert(factor_list.end(), temp_factors.begin(), temp_factors.end());
    }
    map<int,int>mp;
    for( auto it:  factor_list){
        mp[it]++;
    }

    bool flg = false;
    for( auto it: mp){
        if(it.second % n != 0){
            flg = true;
            break;
        }
    }
    if(!flg )
    cout << "YES" << nl;
    else cout << "NO" << nl;
    }
    return 0;
}
