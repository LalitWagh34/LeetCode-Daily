class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() ,nums1.end());
        int n = nums1.size();
        vector<pair<int,int>>position(n); 
        for(int i=0 ;i< n;i++){
            position[i] = {nums2[i] , i};
        }

        sort(position.begin() ,position.end());

        int left = 0 ;
        int right = n-1; 
        vector<int>result(n);
        for(int num :nums1){
            if(num > position[left].first){
                result[position[left].second]= num;
                left++;
            }else{
                result[position[right].second]= num;
                right--;
            }
        }

        return result;
    }
};