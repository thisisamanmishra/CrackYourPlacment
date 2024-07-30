class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0; int N = nums.size();

        for(int start=0;start<N;start++){
            int sum=0;
            for(int end=start;end<N;end++){
                sum += nums[end];
                if(sum == k) ans++;
            }
        }
        return ans;
    }
};