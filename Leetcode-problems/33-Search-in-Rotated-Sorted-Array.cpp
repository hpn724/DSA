class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        if(nums.size()==0)
        {
            return -1;
        }

        else if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int mid_number = nums[mid];

            if(mid_number==target)
            {
                return mid;
            }
            if((target<mid_number && target<nums[high] && mid_number<nums[high]) || (target<mid_number && target>nums[high]&& mid_number>nums[high]) || (target>mid_number && mid_number<nums[high] && target>nums[high]))
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        return -1;
        
    }
};