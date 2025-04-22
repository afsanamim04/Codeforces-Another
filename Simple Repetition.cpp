#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;


const int MAX = 1e6 + 1; // Change this based on your needs
vector<bool> isPrime(MAX, true);

// Sieve of Eratosthenes
void generateSieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAX; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }
}

// Function to check if a number is prime using the sieve
bool checkPrime(int n) {
    if (n < MAX)
        return isPrime[n];
    else {
        // For numbers beyond MAX, fallback to trial division
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0) return false;
        return true;
    }
}

void sol()
{
  ll n, k;
  cin >> n >> k;
  if( n == 1 && k == 1 ){
    cout << "NO" << nl;
  }
  else if( n == 1 && k == 2 ){
    cout << "YES" << nl;
  }
  else if( k > 1 ){
    cout << "NO" << nl;
  }
  else{
    if( checkPrime(n) ) cout << "YES" << nl;
    else cout << "NO" << nl;
  }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    generateSieve();
    int t;
    cin >> t;
    while( t-- )
    {
        sol();
    }
    return 0;
}


