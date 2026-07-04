#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n ;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    vector<long long>b ,c;
    long long mn = a[0];

    for(int i=0;i<n ;i++){
        if(mn == a[i]){
            b.push_back(a[i]);
        }else{
            c.push_back(a[i]);
        }
    }

    if(c.empty() ){
        cout<<-1<<"\n";
    }else{
        cout<< b.size() <<" "<<c.size()<<endl;

        for(auto it:b){
            cout<<it<<" ";
            // cout<<"\n";
        }
        cout<<endl;
        for(auto it:c){
            cout<<it<<" ";
            // cout<<"\n";
        }
        cout<<endl;
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