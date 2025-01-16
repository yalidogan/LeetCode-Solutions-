#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; 

        for(int i = 0; i < s.length(); i++){

            char c = s[i];

            if(!stack.empty()){

                if(stack.top() == '(' && c == ')'){
                    stack.pop();
                }
                else if(stack.top() == '[' && c == ']'){
                    stack.pop();
                }
                else if(stack.top() == '{' && c == '}'){
                    stack.pop();
                }
                else{
                    stack.push(c);
                }
            }
            else{
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
