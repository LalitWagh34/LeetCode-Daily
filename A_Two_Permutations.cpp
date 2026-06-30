#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

void solve(){
    int n ,a,b;
    cin>>n>>a>>b;

    if((a==n && b== n)|| a+b+2<=n){
        cout<<"Yes"<<"\n";
    }else{
        cout <<"No"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}