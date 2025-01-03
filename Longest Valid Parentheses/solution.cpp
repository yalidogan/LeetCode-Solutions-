#include <stack>
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxCount = 0; 
        stack<int> stack;

        stack.push(-8); //As a dummy value  

        for(int i = 0; i < s.length(); i++){

            if(s[i] == '('){
                stack.push(i);
            }
            else{
                //Char is a )
                stack.pop();

                if(stack.empty()){
                    stack.push(i);
                }

                else{
                    maxCount = max(maxCount, i - stack.top());
                }
            }
        }

        return maxCount;

    }
};
