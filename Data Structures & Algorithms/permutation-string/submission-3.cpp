class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        string a,b;
        for(int i=0;i<s1.length();i++){
            a=a+s2[i];
        }
        b=a;
        for(int i=s1.length();i<s2.length()+1;i++){
            sort(b.begin(),b.end());
           cout<<s2[i]<<" ";
            if(b==s1)
            return 1;
           
            a.erase(0,1);
            a=a+s2[i];
            
            b=a;
        }
        return 0;
    }
};
