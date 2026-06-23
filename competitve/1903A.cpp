#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        int k;
        cin>>n >>k;

        vector<int>arr(n);
        for(int i=0 ;i<n;i++){
            cin>>arr[i];
        }

        if(k>= 2){
            cout<<"YES\n";
        }else{
            bool sorted = true;
            
            for(int i=1 ;i<n ;i++){
                if(arr[i] <arr[i-1]){
                    sorted = false;
                    break;
                }
            }
            // cout<<"NO\n";
            cout<<(sorted? "YES" :"NO")<<"\n";
        }
    }

    return 0;
}