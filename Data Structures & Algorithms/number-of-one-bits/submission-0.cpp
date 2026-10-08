class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n>0){
            int a=n%2;
            if(a==1)
            ans++;
            n=n/2;
        }
        return ans;
    }
};
