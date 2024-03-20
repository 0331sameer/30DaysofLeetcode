class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) 
        { 
            int x = a & b; 
            a = a ^ b; 
            b = x << 1; 
        } 
    return a; 
    }
};