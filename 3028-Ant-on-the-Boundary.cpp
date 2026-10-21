class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int pos = 0;
        int boundary=0;

        for(int x:nums){
            pos+= x;

            if(pos == 0){
                boundary++;
            }
        }
        return boundary;

    }
};