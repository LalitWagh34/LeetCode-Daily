#include <bits/stdc++.h>
using namespace std;
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

void solve(){
    int a[10][10];
    int total=0;
    for (int i = 0; i < 10; i++){
        string s;
        cin >> s; 
            for (int j = 0; j < 10; j++){
            a[i][j] = s[j]; 
        }
    }
    for(int r=0;r<10;r++){
        for(int c=0;c<10;c++){
            if(a[r][c] == 'X'){
                total += score[r][c];
            }
        }
    }
    cout<<total<<endl;

}
int main() {
    #ifdef LOCAL_TEST
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    

    return 0;
}