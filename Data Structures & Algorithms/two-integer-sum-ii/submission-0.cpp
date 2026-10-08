class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int a=0,b=n.size()-1;
        vector<int> v;
        while(a<b){
            if(n[a]+n[b]==target){
                v.push_back(a+1);
                v.push_back(b+1);
                break;
            }
            else if(n[a]+n[b]>target)
            b--;
            else 
            a++;
        }
        return v;
    }
};
