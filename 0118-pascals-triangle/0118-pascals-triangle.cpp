class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> x;
        if(numRows == 0){
            return x;
        }
        vector<int> y1;
        y1.push_back(1);
        x.push_back(y1);
        int** a = new int* [numRows];
        for (int i = 0; i < numRows;i++) {
            a[i] = new int[i + 1] {-1};
        }
        a[0][0] = 1;
        for (int i = 1; i < numRows; i++) {
            vector<int> y;
            a[i][0] = 1;
            y.push_back(1);
            for (int j = 1; j < i; j++) {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
                y.push_back(a[i][j]);
            }
            a[i][i] = 1;
            y.push_back(1);
            x.push_back(y);
        }
        return x;
    }
};