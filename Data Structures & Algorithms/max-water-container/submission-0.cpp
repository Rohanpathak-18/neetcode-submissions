class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxWater = 0;
         

         while(left<right){
            int w = right-left;
            int ht = min(heights[left],heights[right]);
            
            int currWater = ht*w;

            maxWater = max(maxWater,currWater);

            if(heights[left]<heights[right]){
            left++;
         }else{
            right--;
         }
         }
         
return maxWater;
    }
};
