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
    cin>>t;

    while(t--){
        int n ;
        cin>>n;

        vector<int>ans;
        int place =1;

        while(n>0){
            int digit = n%10;

            if(digit != 0){
                ans.push_back(digit*place);
            }
            digit*=10;
            n/=10;
        }

        cout<<ans.size()<<"\n";

        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }

    return 0;
}