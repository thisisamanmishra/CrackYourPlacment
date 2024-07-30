class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() -1, ans=0;
        while(left<right){
            ans = max(ans, min(height[right],height[left])*(right-left));

            if(height[right] > height[left]){
                left++;
            }else{
                right--;
            }
        }
        return ans;

    }
};