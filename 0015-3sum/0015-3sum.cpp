class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> x,z;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++){
            int tar = -1 * nums[i];
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[j] + nums[k] > tar){
                    k--;
                }
                else if(nums[j] + nums[k] < tar){
                    j++;
                }
                else{
                    vector<int> y;
                    y.push_back(nums[i]);
                    y.push_back(nums[j]);
                    y.push_back(nums[k]);
                    x.push_back(y);
                    k--;
                    while (j < k && nums[j] == y[1]) j++;
                    while (j < k && nums[k] == y[2]) k--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
        /*for(int i = 0; i < x.size() - 1; i++){
            for(int j = i + 1; j < x.size(); j++){
                if((x[i][0] == x[j][0] && x[i][1] == x[j][1] && x[i][2] == x[j][2]) || (x[i][0] == x[j][0] && x[i][2] == x[j][1] && x[i][1] == x[j][2]) || (x[i][1] == x[j][0] && x[i][0] == x[j][1] && x[i][2] == x[j][2]) || (x[i][1] == x[j][0] && x[i][2] == x[j][1] && x[i][0] == x[j][2]) || (x[i][2] == x[j][0] && x[i][0] == x[j][1] && x[i][1] == x[j][2]) || (x[i][2] == x[j][0] && x[i][1] == x[j][1] && x[i][0] == x[j][2])){
                    x[j].erase(x[j].begin(),x[j].end());
                }
            }
        }
        for(int i = 0; i < x.size(); i++){
            if(x[i].size() == 3){
                z.push_back(x[i]);
            }
        }*/
        return x;
    }
};