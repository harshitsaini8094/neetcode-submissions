class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        vec.push_back(s[0]);
        
        for(int i=1;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
            
                vec.push_back(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(vec.size()==0||vec[vec.size()-1]!='(')
                    return 0;
                    vec.pop_back();}
                    else if(s[i]=='}'){
                        if(vec.size()==0||vec[vec.size()-1]!='{')
                        return 0;
                        vec.pop_back();
                    }
                    else if(s[i]==']'
                    ){
                        if(vec.size()==0||vec[vec.size()-1]!='[')
                        return 0;
                        vec.pop_back();
                    }
                    
                    
                }
            }
        if(vec.size()==0)
        return 1;
        
        return 0;
    }
};
