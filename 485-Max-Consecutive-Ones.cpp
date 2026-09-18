class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left =0 ;
        int maxi = 0;

        for(int right=0;right<nums.size() ;right++){
            if(nums[right] == 0) {
                left = right+1; 
            }else{
                maxi=max(maxi , right-left+1);

            }
        }
        return maxi;



    }
};