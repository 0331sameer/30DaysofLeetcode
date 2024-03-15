class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[n - 1];
        }
        int max = -100;
        for (int i = 0; i < n; i++) {
            int mult = nums[i];
            for (int j = i+1; j < n;j++) {
                if (max < mult) {
                    max = mult;
                }
                mult*=nums[j];
            }
            if (max < mult) {
                max = mult;
            }
        }
        return max;        
    }
};