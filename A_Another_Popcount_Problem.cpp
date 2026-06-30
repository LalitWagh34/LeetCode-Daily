#include <bits/stdc++.h>
#include<bitset>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
void popCount(){
    long long n ,k;
    cin>>n >>k;
    long long count =0 ;


    for(long long i=1; i<=n ;i*=2){
        long long val = min(k ,n /i);
        count+= val;
        n-=val * i ;
    }
    cout<<count<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        popCount();
    }

    return 0;
}