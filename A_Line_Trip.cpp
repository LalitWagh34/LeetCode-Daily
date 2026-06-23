#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
void solve(){
    int n , x;
    cin>>n >>x;

    int arr[n];

    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }

    int ans = arr[0];

    for(int i=1 ;i<n ;i++){
        ans = max(ans ,( arr[i] -arr[i-1] ));
    }

    ans = max(ans , 2*(x-arr[n-1]));

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