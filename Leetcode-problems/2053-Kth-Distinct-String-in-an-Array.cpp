class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int> count_map;
        string result="";
        int counter = 0;
        for(int i=0;i<arr.size();i++)
        {
            count_map[arr[i]]+=1;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(count_map[arr[i]]==1)
            {
                counter++;
            }
            if(counter==k)
            {
                result = arr[i];
                break;
            }
        }
        return result;
    }
};