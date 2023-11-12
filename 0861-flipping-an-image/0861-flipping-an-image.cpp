class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i=0;i<image.size();i++)
        {
            int j=0;
            int k=image[i].size()-1;
            while(j<k)
            {
                swap(image[i][j],image[i][k]);
                j++;
                k--;
            }
        
        }
        for(int i=0;i<image.size();i++)
        {
            vector<int>arr;
            for(int j=0;j<image[i].size();j++)
            {
                image[i][j]=image[i][j]^1;

            }
            
        }
        return image;

          
        
    }
};