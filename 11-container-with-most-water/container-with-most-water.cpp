class Solution {
public:
    int maxArea(vector<int>& height) {
        int lP = 0 ,  rP = height.size()-1 ,  maxWater = 0 ;
        while(lP < rP) {
            int w = rP - lP ;
            int ht = min(height[lP] , height[rP]) ;
            int currWater = w * ht ;

            maxWater = max(maxWater , currWater) ;
            height[lP] < height[rP] ? lP++ : rP-- ;
         }
         return maxWater ;
    }
};