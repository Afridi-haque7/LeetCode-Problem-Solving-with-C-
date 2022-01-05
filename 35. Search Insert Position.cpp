class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid, low, high;
        low=0;
        high = nums.size()-1;
        mid = low + (high-low)/2;
        int ans = 0;
        
        while(low<=high){
            
            if(target==nums[mid])
                return mid;
            
            else if(target < nums[mid]){
                high = mid-1;
            }
            else if(target > nums[mid])
                low = mid+1;
            
           mid = low + (high-low)/2;
            
        }
        
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        ans = mid;
        return ans;
    }
};
