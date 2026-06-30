#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    int eff;
    long long ans=0;
    for(int i=0;i<n-1;i++){
        cin>>eff;
        ans+=eff;
    }
    cout<<-ans<<"\n";
}

int main() {
    #ifdef LOCAL_TEST
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    

    return 0;
}