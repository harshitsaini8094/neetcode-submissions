class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int a[nums.size()-1];
        int b[nums.size()-1];
        int c;
        a[0]=nums[0];
        for(int i=0;i<nums.size()-2;i++){
            c=nums[i+1];
            a[i+1]=c*a[i];
        }
        b[0]=nums[nums.size()-1];
        for(int i=0;i<nums.size()-2;i++){
            c=nums[nums.size()-2-i];
            b[i+1]=c*b[i];
        }
        int d=-1,e=nums.size()-2;
        for(int i=0;i<nums.size();i++){
            if(d==-1)
            ans.push_back(b[e]);
            else if(e==-1)
            ans.push_back(a[d]);
            else
            ans.push_back(a[d]*b[e]);
            d++;
            e--;
        }
        return ans;
    }
};
