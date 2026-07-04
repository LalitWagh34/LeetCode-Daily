#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n ;
    cin >>n ;

    long long arr[n];

    long long operations =INT_MAX;
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n ;i++){
        operations = min(operations , abs(arr[i]));
    }
    cout << operations<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // if (cin >> t) {
    //     while (t--) {
        solve();
    //     }
    // }
    return 0;
}


