#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n ;
    cin>>n;

    vector<long long>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long oddCount=0;
    for(int i=0;i<n;i++){
        if(a[i] %2 == 1) 
            oddCount++;
    }   

    if(oddCount%2 == 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;       
    }
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