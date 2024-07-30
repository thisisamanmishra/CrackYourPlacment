class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         set<vector<int>> ansSet;
        
        
        for(int left=0; left<=nums.size()-3;left++){
            int mid = left+1; int right = nums.size()-1;
            while(mid<right){
                int sum = nums[left]+nums[mid]+nums[right];
                if(sum == 0){
                    ansSet.insert({nums[left], nums[mid], nums[right]});
                    mid++;
                    right--;
                } else if(sum<0){
                    mid++;
                }else{
                    right--;
                }
            }
        }
        vector<vector<int>> ans(ansSet.begin(), ansSet.end());
        return ans;
    }
};