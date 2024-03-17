class Solution {
public:
    
    int algo(vector<int>& a,int i,int j)
    {
        if(j == i + 1){
            if(j == i+1 && a[j] < a[i]){
                return a[j];
            }
            return a[i];
        }
        if(j == i){
            return a[j];
        }
        int mid = (i+j)/2;
        if(a[mid] < a[mid - 1] && a[mid] < a[mid + 1]){
            return a[mid];
        }

        if (a[i] < a[j] && a[mid - 1] < a[mid + 1]){
            return algo(a,i,mid-1);
        }
        else if(a[i] > a[j] && a[mid - 1] < a[mid + 1] && a[mid - 1] < a[j]){
            return algo(a,i,mid-1);
        }
        else if(a[i] > a[j] && a[mid - 1] > a[mid + 1]){
            return algo(a,mid + 1,j);
        }
        else if(a[i] > a[j] && a[mid - 1] < a[mid + 1] && a[mid - 1] > a[j]){
            return algo(a,mid + 1,j);
        }
        else{
            return algo(a,mid + 1,j);
        }
    }
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        return algo(nums,i,j);
    }
};