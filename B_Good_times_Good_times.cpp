#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> y;

void precompute() {

    for (int d1 = 0; d1 <= 9; ++d1) {
        for (int d2 = d1; d2 <= 9; ++d2) {
            
            for (int len = 1; len <= 10; ++len) {
                
                for (int m = 0; m < (1 << len); ++m) {
                    long long val = 0;
                    for (int i = 0; i < len; ++i) {
                        int d = (m & (1 << i)) ? d2 : d1;
                        val = val * 10 + d;
                    }

                    if (val >= 2 && val <= 1000000000) {
                        y.push_back(val);
                    }
                }
            }
        }
    }
    
    sort(y.begin(), y.end());
    y.erase(unique(y.begin(), y.end()), y.end());
}
bool check(long long v) {
    int m = 0;
    int pop = 0;
    
    while (v > 0) {
        int d = v % 10;
        if ((m & (1 << d)) == 0) {
            m |= (1 << d);
            pop++;
            if (pop > 2) return false; 
        }
        v /= 10;
    }
    return true;
}

void solve() {
    long long x;
    cin >> x;

    for (long long yy : y) {
        if (check(x * yy)) {
            cout << yy << "\n";
            return;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}