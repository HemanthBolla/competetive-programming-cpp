class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            int k=0;
            int j=image[i].size()-1;
            while(k<=j)
            {
                if(image[i][k]==image[i][j])
                {
                     if(image[i][k]==1)
                     {
                         image[i][k]=0;
                         image[i][j]=0;
                     }
                     else
                     {
                         image[i][k]=1;
                         image[i][j]=1;
                     }
                }
                k++;
                j--;
                    
            }
           
        
        }
        return image;
    }
};
