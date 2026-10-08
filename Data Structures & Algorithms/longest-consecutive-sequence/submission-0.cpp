class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,a=1;
        if(nums.size()==0)
        return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                a++;
            }
            else{
                if(nums[i]==nums[i+1])
                continue;
                if(a>ans)
                ans=a;
                a=1;
            }
        }
        if(a>ans)
        ans=a;
        return ans;
    }
};
