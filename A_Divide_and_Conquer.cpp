#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x ,y;
    cin>>x >>y;

    if(x%y ==0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

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