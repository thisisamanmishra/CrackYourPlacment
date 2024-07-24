class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ZeroIndex = -1;
        for(int i=0;i<=nums.size()-1;++i){
            if(nums[i]!=0){
                swap(nums[++ZeroIndex], nums[i]);
            }
        }
    }
};