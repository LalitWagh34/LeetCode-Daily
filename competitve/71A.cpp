#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        
            if(s.size() <= 10){
                cout<<s <<"\n";
            }else {
                // res =  ;
                cout << s.front() << s.length() - 2 << s.back() << '\n';
            }
        
    }

    return 0;
}