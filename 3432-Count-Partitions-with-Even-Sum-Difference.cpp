class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;

        for(auto x:nums){
            total += x;
        }

        return (total %2 ==0) ? nums.size()-1 :0;


    }
};