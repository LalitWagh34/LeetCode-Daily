#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
void solve(){
    int n ;
    cin>>n;
    map<int ,int>mp;


    for(int i=0 ;i<n;i++){
        int x;
        cin >>x;
        mp[x]++;
    }
    if(mp.size()>=3) cout<<"No\n";

    else {
        if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) {
            cout << "Yes\n";
        } else {
            cout <<"No\n";
        }
    }




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