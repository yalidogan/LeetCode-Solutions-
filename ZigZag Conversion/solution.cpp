class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s; 
        }
        int n = numRows; 
        int temp = n * 2 - 2; 
        vector<string> arr(n, ""); 
        int count = numRows - 1;
        for(int i = 0; i < s.length(); i++){
            int index = i % temp; 
            if(index < numRows){
                arr[index] += s[i];
            }
             
            else{
                if(count == 1){
                    count = numRows - 1; 
                }

                arr[count - 1] += s[i];
                count--; 
                
            }

        }

        string result = ""; 
        for(int i = 0; i < arr.size(); i++){
            result += arr[i];
        }

        return result; 
    }
};
