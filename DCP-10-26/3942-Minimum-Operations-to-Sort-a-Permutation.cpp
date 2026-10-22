class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int asc=1 ;
        int desc =1;

        for(int i=1;i<n ;i++){
            asc+= nums[i] == (nums[i-1] +1)%n;
            desc+= nums[i-1] == (nums[i] +1)%n;
        }

        if(asc == n) return nums.front() ? min(n- nums.front() ,nums.front()+2 ):0;

        if(desc == n) return  min(n- nums.back() ,nums.back() )+1;

        return -1;
    }
};