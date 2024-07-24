class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int uniqueCount = 1;
        
        for (int i = 1; i < nums.size(); i++){
            
            if(nums[i] != nums[i-1]){
                nums[uniqueCount] = nums[i];
                uniqueCount += 1;
            }
        }
        
        return uniqueCount;
    }
};