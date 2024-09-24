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
    string s;
    cin >> s;
    int m;
    cin >> m;

    // Store special characters in a set for fast lookup
    set<char> special;
    for (int i = 0; i < m; ++i) {
        char x;
        cin >> x;
        special.insert(x);
    }

    int ans = 0;  // This will store the maximum number of times we can run the program
    int cnt = 0;  // This is to count the length of non-special segments
    bool foundSpecial = false;  // To check if any special characters are present

    // Traverse the string to calculate how many times we can run the program
    for (int i = 0; i < n - 1; ++i) {
        if (special.count(s[i + 1])) {  // If next character is a special character
            ans = max(ans, cnt + 1);  // Maximum of current count + 1 (as we can remove this segment)
            cnt = 0;  // Reset count
            foundSpecial = true;  // A special character was found
        } else {
            cnt++;  // Continue counting non-special characters
        }
    }

    // Final check if the string has special characters or not
    if (foundSpecial) {
        cout << ans << nl;
    } else {
        cout << 0 << nl;  // If no special characters, no deletion is possible
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        sol();
    }

    return 0;
}
