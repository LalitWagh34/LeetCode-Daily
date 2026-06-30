#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
long long gcd(long long a ,long long b){
    return b == 0?  a: gcd(b ,a%b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        long long a  ,b , k;
        cin >>a>>b>>k;

        long long g = gcd(a , b);

        if(max(a/g , b/g) <= k){
            cout <<"1\n";
        }else{
            cout <<"2\n";
        }
    }

    return 0;
}