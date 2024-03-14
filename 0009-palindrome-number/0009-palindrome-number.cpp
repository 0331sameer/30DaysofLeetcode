class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int num = x;
        long int newx = 0;
        while(true){
            newx += num % 10;
            num = num / 10;
            if(num == 0){
                break;
            }
            newx *= 10;
        }
        if(x == newx){
            return true;
        }
        else{
            return false;
        }
    }
};