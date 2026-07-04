#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long count =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]%2 == arr[i+1]%2){
            count++;
        }
    }
    cout<<count<<"\n";
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


boiler