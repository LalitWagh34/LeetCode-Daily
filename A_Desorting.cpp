#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  n ;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long min_op =INT_MAX;

    for(int i=0;i<n-1 ;i++){
        if(arr[i] <=arr[i+1]){
            long long diff= arr[i+1]-arr[i];
            long long operation = diff/2+1;

            min_op = min(min_op ,operation );
        }else{
            min_op=0;
        }

    }
    cout <<min_op<<"\n";

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