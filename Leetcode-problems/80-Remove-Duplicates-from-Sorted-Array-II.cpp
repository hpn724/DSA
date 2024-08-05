class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int,int> mapper;
        for(int i=0;i<nums.size();i++)
        {
            mapper[nums[i]]+=1;
        }

        int result = 0;
        for(auto i:mapper)
        {
            if(i.second<=2)
            {
                while(i.second>0)
                {
                    nums[result] = i.first;
                    result++;
                    i.second--;
                }
            }
            else
            {
                int temp = 2;
                while(temp>0)
                {
                    nums[result] = i.first;
                    result++;
                    temp--;
                }
            }
        }
        return result;
    }
};