#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
void solve(){
    int n ,m;
    cin>>n >>m ;

    string s ;
    string t;
    cin>> s>>t;
    int ans =-1;
    for(int i=0;i<=5;i++){
        if(s.find(t) != string::npos){
            ans= i;
            break;
        }
        s+=s;
    }
    cout<<ans<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        solve();
    }

    return 0;
}