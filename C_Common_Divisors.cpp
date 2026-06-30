#include <bits/stdc++.h>
#include <numeric> 
using namespace std;
// typedef long long ll;
#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
long long gcd(long long a ,long long b){
    return b == 0?  a: gcd(b ,a%b);
}
long long countNumber(long long n){
    long long ans =1;

    for(int i=2;i <= n/i ;i++){
        int cnt =0 ;
        while(n%i == 0){
            n/=i;
            cnt ++;
        }
        ans *= (cnt +1);
    }

    if(n >1){
        ans *= 2;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin>> n;

    long long l =0;
    vector<long long>a(n);
    for(int i=0 ;i<n;i++){
        cin>>a[i];
    }

    for(int i =0 ;i<n ;i++){
        l = gcd(l , a[i]);
    }

    cout << countNumber(l);

    
    return 0;
}