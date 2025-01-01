class Solution {
public:
    int maxScore(string s) {
        
        int ones = 0;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='1')
            {
                ones++;
            }
        }
        int curr_max = INT_MIN;
        int num_zeros_left = 0;
        int num_ones_left = 0;
        int curr_sum = 0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0')
            {
                num_zeros_left++;
            }
            else
            {
                num_ones_left++;
            }

            curr_sum = ones + num_zeros_left - num_ones_left;

            if (curr_sum> curr_max)
            {
                curr_max = curr_sum;
            }
            
        }

        return curr_max;
    }
};