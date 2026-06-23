#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
void solve(){
    int n;
    cin>>n;

    int count =0;
    for(int i=1 ;i*i<=n ;i++){
        if(n%i ==0){
            count ++;
            if(i != n/i){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n;
    while(n--){
        solve();
    }

    return 0;
}