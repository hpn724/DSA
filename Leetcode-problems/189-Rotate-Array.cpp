class Solution {
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void reverse(vector<int>& nums, int start,int end)
    {
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    {
        if(nums.size()-1>=k)
        {
            reverse(nums,0,nums.size()-1);
            reverse(nums,0,k-1);
            reverse(nums,k,nums.size()-1);
        }
        else
        {
            rotate(nums, k-nums.size());
        }
        
    }
};