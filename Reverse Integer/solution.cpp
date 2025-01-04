class Solution {
public:
    int reverse(int x) {
        int max = numeric_limits< int>:: max(); 

        if(x / 10 == 0){
            return x; 
        }

        bool negative = false; 

        if(x < 0){

            if(x == (numeric_limits<int>:: min())){
                return 0;
            }
            negative = true; 
            x = x * -1; 
        }

        int rev = 0; 
        int pow = 10; 

        while(x > 0){

            int temp = x % 10;

            if(rev > (numeric_limits< int>:: max() / pow) ){
                return 0; 
            }
            rev *= pow;
            rev += temp;
            
             
             
            x = x / 10; 
        }


        if(negative){
            return -rev; 
        }

        else{
            return rev; 
        }

    }
};
