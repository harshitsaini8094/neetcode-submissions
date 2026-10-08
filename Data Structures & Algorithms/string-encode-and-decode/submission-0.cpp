class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs.size();i++){
            ans=ans+strs[i]+char(258);
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        string a;
        for(int i=0;i<s.length();i++){
            if(s[i]==char(258)){
                ans.push_back(a);
                a.clear();
            }
            else
            a=a+s[i];
        }
        
        
        return ans;
    }
};
