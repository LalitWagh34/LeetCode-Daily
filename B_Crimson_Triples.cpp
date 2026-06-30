#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin>>n;
    long long ans =0;

    for(int i=1;i<=n;i++){
        long long mgcd = n/i;
        ans += (mgcd *mgcd); 
    }
    cout <<ans<<"\n";
}

int main() {
    #ifdef LOCAL_TEST
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    while(n--){
        solve();
    }
    

    return 0;
}