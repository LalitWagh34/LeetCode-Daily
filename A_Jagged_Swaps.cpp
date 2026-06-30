#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);
        for(int i=0 ;i<n ;i++){
            cin>>arr[i];
        }

        if(arr[0] == 1){
            cout <<"YES"<<endl;;
        }else{
            cout <<"NO" <<endl;
        }
    }

    return 0;
}