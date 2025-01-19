class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Possibly rotated ascending array 
        if(nums.size() == 1){
            if(nums[0] == target){
                return 0;
            }
            return -1; 
        }

        int n = nums.size();
        int left = 0; 
        int right = nums.size() - 1; 

        while(left <= right){
            if(nums[right] == target){
                return right;
            }
            if(nums[left] == target){
                return left; 
            }

            left++;
            right--; 
        }

        return -1; //number not found 


    }
};
