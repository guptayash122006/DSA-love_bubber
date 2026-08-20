class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxWater = 0 ;
        // for(int i=0 ; i<height.size() ; i++) {
        //     for(int j=i+1 ; j<height.size() ; j++) {
        //         int w= j-i ;
        //         int ht = min(height[i] , height[j]) ;
        //         int currWater = w * ht ;

        //         maxWater = max(maxWater , currWater) ; 
        //     }
        // }
        // return maxWater ;

        // this brut force approach show time limit exist

        int lP = 0 , rP = height.size()-1 , maxWater = 0 ;
        while(lP < rP) {
            int w = rP - lP ;
            int ht = min(height[lP] , height[rP] ) ;
            int currWater = w * ht ;
            maxWater = max(maxWater , currWater) ;
            height[lP] < height[rP] ? lP++ : rP-- ;
         }
            return maxWater ;
    }
};