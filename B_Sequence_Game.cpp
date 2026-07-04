#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; 
        cin >> n;
        vector<long long> b(n), a; 
        for (int i = 0; i < n; i++)
            cin >> b[i];
        

        a.push_back(b[0]); 
        for (int i = 1; i < n; i++) 
        {
            if (b[i] >= b[i - 1])
                a.push_back(b[i]);
            else
            {
                a.push_back(b[i]); // Add the current element to a
                a.push_back(b[i]); // Add the current element again to a to ensure a[i-1] <= a[i]
            }
        }
        cout << a.size() << endl; // Output the size of the reconstructed sequence a
        for (auto it : a) // Output each element of the sequence a
            cout << it << " ";
        cout << endl; // New line after each test case
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}