class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> path;

        int curr_max_step = 1;

        int r_curr = rStart;
        int c_curr = cStart;

        path.push_back({r_curr, c_curr});
        cout<<"Adding : ["<<r_curr<<", "<<c_curr<<"]"<<endl;

        c_curr += 1;

        while(path.size() < rows*cols)
        {
            cout<<"Current step size : "<<curr_max_step<<endl;
            //move down
            
            if(r_curr == rStart - curr_max_step + 1 && c_curr == cStart + curr_max_step)
            {
                cout<<"Moving down"<<endl;
                while(r_curr < rStart + curr_max_step)
                {
                    cout<<"Current row : "<<r_curr<<" \tCurrent column : "<<c_curr<<endl;
                    if (c_curr<cols && r_curr>=0 && r_curr<rows && c_curr>=0)
                    {
                        path.push_back({r_curr, c_curr});
                        cout<<"Adding : ["<<r_curr<<", "<<c_curr<<"]"<<endl;
                    }
                    r_curr++;
                }

            }

            //move left
            if(r_curr == rStart + curr_max_step && c_curr == cStart + curr_max_step )
            {
                
                cout<<"Moving left"<<endl;
                while(c_curr > cStart - curr_max_step)
                {
                    cout<<"Current row : "<<r_curr<<" \tCurrent column : "<<c_curr<<endl;
                    if(c_curr<cols && r_curr>=0 && r_curr<rows && c_curr>=0)
                    {
                        path.push_back({r_curr, c_curr});
                        cout<<"Adding : ["<<r_curr<<", "<<c_curr<<"]"<<endl;
                    }
                    c_curr--;
                }
            }

            

            //move up
            if(r_curr == rStart + curr_max_step && c_curr == cStart - curr_max_step )
            {
                cout<<"Moving up"<<endl;
                
                while(r_curr > rStart - curr_max_step)
                {
                    cout<<"Current row : "<<r_curr<<" \tCurrent column : "<<c_curr<<endl;
                    if(c_curr<cols && r_curr>=0 && r_curr<rows && c_curr>=0)
                    {
                        path.push_back({r_curr, c_curr});
                        cout<<"Adding : ["<<r_curr<<", "<<c_curr<<"]"<<endl;
                    }
                    r_curr--;
                }
            }

            //move right
            if(r_curr == rStart - curr_max_step && c_curr == cStart - curr_max_step)
            {
                
                cout<<"Moving right"<<endl;
                curr_max_step++;
                while(c_curr < cStart + curr_max_step)
                {
                    cout<<"Current row : "<<r_curr<<" \tCurrent column : "<<c_curr<<endl;
                    if(c_curr<cols && r_curr>=0 && r_curr<rows && c_curr>=0 )
                    {
                        path.push_back({r_curr, c_curr});
                        cout<<"Adding : ["<<r_curr<<", "<<c_curr<<"]"<<endl;
                    }
                    c_curr++;
                }
                
            }
        }

        return path;


    }
};