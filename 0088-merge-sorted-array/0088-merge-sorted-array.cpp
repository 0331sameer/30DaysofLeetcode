class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++){
            nums1[i+m] = nums2[i]; 
        }
        sort(nums1.begin(), nums1.end());
        /*if(n == 0){
            return;
        }
        if(m == 0){
            for(int l =0; l < n;l++){
                nums1[l] = nums2[l];
            }
            return;
        }
        int* arr = new int [m+n];
        int i =0;int j=0;
        for(; i + j < m+n;){
            if(nums1[i] < nums2[j] && i!=m || j == m){
                arr[i+j] = nums1[i];
                i++;
            }
            else{
                arr[i+j] = nums2[j];
                j++;
            }
        }
        for(int k =0 ; k < m+n;k++){
            nums1[k]=arr[k];
        }*/
    }
};