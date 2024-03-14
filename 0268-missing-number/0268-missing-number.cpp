class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int* arr = new int[n+1];
        for(int i = 0; i < n+1; i++){
            arr[i] = -1;
        }
        for(int i = 0; i < n; i++){
            arr[nums[i]] = 1;
        }
        for(int i = 0; i < n+1; i++){
            if(arr[i] == -1){
                return i;
            }
        }
        return 0;
    }
};