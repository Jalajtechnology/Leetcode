class Solution {
public:
    int maxArea(vector<int>& height) {
        //int max=INT_MIN;
        //for(int i=0;i<height.size();i++)
        //{
            //for(int j=i+1;j<height.size();j++)
            //{
               // int p=i+1;
                //int q=j+1;
                //int r=(q-p)*(min(height[i],height[j]));
                //if(r>max)
                //{
                    //max=r;
               // }//
           // }//
       // }//
        //return max;
        int max=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            int k=j-i;
            int l=min(height[i],height[j]);
            int q=k*l;
            if(q>max)
            {
                max=q;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }

        }
        return max;
        
    }
};