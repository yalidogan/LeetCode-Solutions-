class Solution {
public:
    int maximumGain(string s, int x, int y) {
        
        int score = 0; 
        string top, bot; 
        int topScore, botScore; 

        if(y > x){
            top = "ba";
            topScore = y; 
            bot = "ab";
            botScore = x; 
        }
        else{
            top = "ab"; 
            topScore = x; 
            bot = "ba";
            botScore = y;
        }

        vector<char> stack; 
        for(char ch : s){
            if(ch == top[1] && !stack.empty() && stack.back() == top[0]){
                score += topScore; 
                stack.pop_back(); 
            }
            else{
                stack.push_back(ch);
            }
        }

        vector<char> newStack;
        for(char ch : stack){
            if(ch == bot[1] && !newStack.empty() && newStack.back() == bot[0]){
                score += botScore; 
                newStack.pop_back(); 
            }
            else{
                newStack.push_back(ch);
            }
        }


        return score;
    }
};
