#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    string s;
    cin>>n>>s;

    int count =0 ;
    for(int i=0 ;i<n-1 ;i++){
        if(s[i] != s[i+1]) count++;
    }

    cout << (count == 1? 2:1) <<"\n";
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