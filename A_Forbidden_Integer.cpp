#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k,x;
    cin>>n>>k>>x;

    if(x!= 1){
        cout << "YES"<<"\n";
        cout <<n<<endl;
        for(int i=1;i<=n;i++){
            cout <<1<<" ";
        }
        cout <<endl;
    }else{
        if(k== 1|| (k==2 && n%2 ==1)){
            cout<<"NO"<<endl;
        }else{
            cout <<"YES"<<endl;
            if(n%2 == 0){
                cout <<n/2 << endl;
                for(int i=1;i<= n/2 ;i++){
                    cout <<2<<" ";
                }
                cout <<endl;
            }else{
                cout << (n - 3) / 2 + 1 << endl; // Output the number of integers used
                for (int i = 1; i <= (n - 3) / 2; i++) // Output (n-3)/2 number of 2s
                    cout << 2 << " ";
                    cout << 3 << endl; // Output a 3 to make the sum n
                }
                
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