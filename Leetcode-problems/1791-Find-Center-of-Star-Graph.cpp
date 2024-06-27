class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int result = 0;
        int temp1 = edges[0][0];
        int temp2 = edges[0][1];

        for(int i=1;i<edges.size();i++)
        {
            for(int j=0;j<edges[0].size();j++)
            {
                if(temp1 == edges[i][j])
                {
                    result = temp1;
                    break;
                }
                else if(temp2 == edges[i][j])
                {
                    result = temp2;

                }
            }
            if(result !=0)
            {
                break;
            }

        }

        return result;
    }
};