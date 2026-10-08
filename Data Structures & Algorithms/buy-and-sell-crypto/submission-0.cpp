class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max=p[0],min=p[0],ans=0;
        for(int i=0;i<p.size();i++){
            
            if(p[i]<max){
            max=p[i];
            min=max;
            }
            else
            min=p[i];
            int a=min-max;
            
            if(a>ans)
            ans=a;

        }
        return ans;
    }
};
