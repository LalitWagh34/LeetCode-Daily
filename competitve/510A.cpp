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
    int k;
    cin>>n >>k;

    for(int i= 1 ;i<= n;i++){
        for(int j=1;j<=k;j++){
            bool hasSnake  = false; 
            if(i%2 == 1) hasSnake = true;
            else{
                if(i%4 == 2) hasSnake = (j==k);
                if(i%4 == 0) hasSnake = (j== 1);
            } 
            cout<<(hasSnake ? "#": ".");
        }
        cout<<endl;
    }

    return 0;
}