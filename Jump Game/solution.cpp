class Solution {
public:
    bool canJump(vector<int>& nums) {
        int destination = nums.size() - 1; 

        //Set the destination or the start to the last element of the array
        //And then check if we can reach that destination from any other previous
        //Elements of the array
        //If we can reach the destination from the other previous elements
        //Then the destination becomes that previous element
        //continue until we reach the start of the array
        //If we can reach the start, return true

        for(int i = nums.size() - 1; i >= 0; i--){

            if(i + nums[i] >= destination){
                destination = i; 
            }

        }

        return destination == 0; 
    }
};
