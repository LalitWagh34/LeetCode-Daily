#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

void solve(){
    int n ;
    cin >> n;
    string s;
    cin >>s;
    int t= s.size();
    bool three_cont_dot = false;
    int count_empty_cells  = 0;


    for(int i= 0; i<n ;i++){

        if(s[i] =='.' && i < t && s[i+1] == '.' && i+1 < t&&  s[i+2] == '.' && i+2 <t ){
            three_cont_dot = true;
            break;
        }

        if(s[i] == '.'){
            count_empty_cells++;
        }

        
    }
    if(three_cont_dot){
        cout <<2 <<"\n";    
    }else{
        cout << count_empty_cells <<"\n";
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