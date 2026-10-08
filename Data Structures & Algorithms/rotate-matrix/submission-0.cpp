class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector <vector<int>> ans;
        for(int i=0;i<matrix.size();i++){
            vector <int > vec;
            for(int j=matrix.size()-1;j>=0;j--){
                vec.push_back(matrix[j][i]);
            }
            ans.push_back(vec);
        }
        matrix =ans;
        
    }
};
