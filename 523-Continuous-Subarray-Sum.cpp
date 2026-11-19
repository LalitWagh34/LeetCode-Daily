class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int ,int>mpp;
        mpp[0]=-1;
        int n= nums.size();
        int rem = 0 ;
        for(int i=0 ;i<n ;i++){
            rem += nums[i];
            int remainder = rem % k;
            //  23%6 --> 5

            if(mpp.find(remainder) != mpp.end()){
                if(i- mpp[remainder] >= 2) {
                    return true;
                } 
            }else{
                mpp[remainder] = i;
            }
        }
        return false;   
    }
};