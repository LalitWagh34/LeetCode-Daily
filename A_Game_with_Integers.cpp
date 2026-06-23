#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

void solve(){
    int n;
    cin >>n;

    if(n%3 == 0){
        cout<<"Second"<<"\n";
    }else{
        cout<<"First"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin>>n;

    while(n--){
        solve();
    }


    return 0;
}