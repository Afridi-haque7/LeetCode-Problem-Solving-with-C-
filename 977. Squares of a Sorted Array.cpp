class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        vector<int> ans;
        
        while(i<=j){
            if(nums[i]*nums[i] <= nums[j]*nums[j]){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
