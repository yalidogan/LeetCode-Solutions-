class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = ""; 

        if(strs.size() == 0){
            return pref; 
        }

        if(strs.size() == 1){
            return strs[0];
        }

        sort(strs.begin(), strs.end()); //Sort ther strings 

        int len = min(strs[0].length(), strs[strs.size() - 1].length()); 
        int i = 0; 

        while(i < len && strs[0][i] == strs[strs.size() - 1][i]){
            i++; 
        }

        pref = strs[0].substr(0,i);


        return pref; 
    }
};
