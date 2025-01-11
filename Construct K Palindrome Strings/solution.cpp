class Solution {
public:
    bool canConstruct(string s, int k) {
        int number = 0; 
        int n = s.length(); 
        if(n < k){
            return false; 
        }

        if(n == k){
            return true; 
        }

        vector<int> freq(26, 0); 
        int count = 0; //Unique chars

        for(int i = 0; i < n; i++){
            int index = s[i] - 'a'; 
            freq[index]++; 
        }

        int even = 0; 
        int odd = 0; 
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] == 0){
                continue; 
            }
            if(freq[i] % 2 == 1){
                odd++;
            }
            if(freq[i] % 2 == 0){
                even++;
            }
        }


        if(odd > k){
            return false; 
        }
        
        return true; 


    }
};
