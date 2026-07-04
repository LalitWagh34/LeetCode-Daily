#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;
    cin>>a>>b>>c;

    if(c%2 != 0){
        if(b>a){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }else{
        if(a>b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}