class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999 ) return 0 ;

        long long start = 1000;
        long long commaCount =0;

        while(start<= n){
            commaCount += n-start+1;
            start*=1000;
        }
    return commaCount;
    }
};