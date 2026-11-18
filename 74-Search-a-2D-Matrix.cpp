class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top =matrix.size();
        int bottom = matrix[0].size();

        int left =0;
        int right=bottom-1;

        while(left < top &&right>-1 ){
            int curr =matrix[left][right];
            if(curr == target){
                return true;
            }
            if(curr > target){
                right--;
            }else {
                left++;
            }
        }

        return false;
    }
};