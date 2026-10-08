class Solution {
public:
 int check(string a,string b){
        if(a.length()!=b.length())
        return 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i])
            return 0;
        }
        return 1;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            vector<string> a;
            a.push_back(strs[i]);
            for(int j=i;j<strs.size();j++){
                if(i==j)
                continue;
                else if(check(strs[i],strs[j])){                                 //{"act","pots","tops","cat","stop","hat"}
                    a.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            ans.push_back(a);
            strs.erase(strs.begin()+i);
            i--;
        }
        return ans;
    }
};
