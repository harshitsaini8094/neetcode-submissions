class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<k;i++){
            int a=0,n;
            for(auto b:umap){
                if(b.second>a){
                    a=b.second;
                    n=b.first;
                }
            }
            ans.push_back(n);
            umap.erase(n);

        }
        
        return ans;
    }
};
