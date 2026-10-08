class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        set<int> s1,s2;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(s1.find(i)!=s1.end()||s2.find(j)!=s2.end()){
                    nums[i][j]=0;
                }
            }
        }
        
    }
};
