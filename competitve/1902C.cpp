#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n;
    cin>>n;

    while(n--){
        int t ;
        cin>>t;

        vector<long ,long>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(a.begin(), a.end());
        
        long long g =0;
        
        for(int i=1;i<=n;i++){
            g=gcd(g ,a[i]-a[i-1]);
        }
        
        if (x == 0) x = 1;
        
        long long mx = a[n-1];
        long long sum = accumulate(arr.begin(), arr.end() , 0ll);

        long long res = mx ;
        int j= n-1;

        while(true){
            while(j>= 0 && arr[j] >res){
                j--;
            }
            if(j< 0 || arr[j]!= res){
                break;
            }

            res -= g;
        }

        long long answer = (mx * (t+1) - (sum + res))/x;
        cout <<answer<<"\n";

    }

    return 0;
}