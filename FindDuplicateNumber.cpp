// BruteForce using Two pointer
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    duplicate = nums[i];
                    break;
                }
            }
        }
        return duplicate;
    }
};

// Better Approach using sorting

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int duplicate;

        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                duplicate= nums[i];
            }
        }
        return duplicate;
    }
};

// Optimized Approach using Linkedlist
