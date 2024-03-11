class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& a) {
    int n = a.size();
    vector<int> b(n, 1);
    vector<int> c(n, 1);
    for (int i = 1; i < n; ++i){  
        b[i] = b[i - 1] * a[i - 1];
    }
    for (int i = n-2; i >= 0; --i){  
        c[i] = c[i + 1] * a[i + 1];
    }
    for (int i = 0; i < n; ++i)
    {  
        b[i] *= c[i];
    }
    return b;
  }
};