class Solution {
public:
    string digitSum(string s, int k) {
        int n= s.size();

        while(n > k){
            string ans ="";
            for(int i=0;i<n ;i+=k){
                int sum =0 ;

                for(int j=i ; j<i+k && j<n;j++){
                    sum += s[j] -'0';
                }

                ans  += to_string(sum);

            }

            s = ans ;
            n = ans.size();

        }
        return s;
    }
};