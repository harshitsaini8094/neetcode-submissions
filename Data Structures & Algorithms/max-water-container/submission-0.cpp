class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int ans=0;
        while(l<r){
            int m=r-l;
            int ma=m*min(h[r],h[l]);
            if(ma>ans)
            ans=ma;
            if(h[r]>h[l])
            l++;
            else
            r--;
        }
        return ans;
    }
};
