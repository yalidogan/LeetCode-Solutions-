class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0; 
        int curr = 0; 
        int left = 0; 
        int right = height.size() - 1; 

        while(left < right){
            curr = min(height[left], height[right]) * (right - left); 

            maxArea = max(curr, maxArea); 


            if(height[left] < height[right]){
                left++; 
            }
            else{
                right--; 
            }
        }
        


        return maxArea; 
    }
};
