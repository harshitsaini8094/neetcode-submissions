class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int a=0;
            int g=i;
            while(g>0){
                int t=g%2;
                if(t==1)
                a++;
                g=g/2;
            }
            ans.push_back(a);
        }
         return ans;
    }
};
