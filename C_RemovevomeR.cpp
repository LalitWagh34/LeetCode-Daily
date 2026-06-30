#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // If the first and last characters are the same, 
    // the whole string or a sub-segment can be reduced to length 1.
    if (s[0] == s[n - 1]) {
        cout << 1 << "\n";
    } 
    // If they are different, the minimum length is 2.
    else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}