#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k;
    cin>>n >>k;

    vector<long long>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check_k= false;
    for(int c:arr){
        if(c == k){
           check_k =true;
           break;
        }
    }

    if(check_k){
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

    int n;
    cin>>n;

    while(n--){
        solve();
    }
    

    return 0;
}