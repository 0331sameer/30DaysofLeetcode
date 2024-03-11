class Solution {
public:
    int singleNumber(vector<int> v) {
        int num = 0;
        for(int i = 0; i < v.size(); i++){
            int count = 0;
            for(int j = 0; j < v.size(); j++){
                if(v[i] == v[j]){
                    count++;
                }
            }
            if(count <= 1){
                num = v[i];
                break;
            }
        }
        return num;
    }
};