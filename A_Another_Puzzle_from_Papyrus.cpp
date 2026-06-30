#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n ,c;
    cin>>n>>c;

    vector<int>a(n);
    vector<int>b(n);

    long long sum1=0;
    long long sum2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum2+=b[i];

    }
    bool status = true;
    for(int i=0 ;i<n;i++){
        if(a[i] < b[i]){
            status = false;
            break;
        }
    }
    long long diff = sum1-sum2;

    if(status){
        cout<<diff<<"\n";
        return ;
    }
    vector<int>a1= a;
    vector<int>b1= b;


    sort(a1.begin(),a1.end());
    sort(b1.begin(),b1.end());
    bool statusShufle = true;
    for(int i=0 ;i<n;i++){
        if(a1[i] < b1[i]){
            statusShufle = false;
            break;
        }
    }
    if (statusShufle) {
        cout << diff + c << "\n";
    } else {
        cout << -1 << "\n";
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