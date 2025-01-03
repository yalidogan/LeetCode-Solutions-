class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Merge the arrays onto one 

        int n = nums1.size();
        int m = nums2.size();

        vector<int> merged; 

        for(int i = 0; i < n; i++){
            merged.push_back(nums1[i]);

        }

        for(int i = 0; i < m; i++){
            merged.push_back(nums2[i]);
        }

        sort(merged.begin(), merged.end());

        int total = merged.size();

        if(total % 2 == 1){
            //Single median 
            return (double)(merged[total / 2]);
        }
        else{
            //Double median 
            int middle1 = merged[total / 2 - 1];
            int middle2 = merged[total / 2]; 
            return ((double) (middle1) + double(middle2)) / 2.0;
        }
        
    }
};
