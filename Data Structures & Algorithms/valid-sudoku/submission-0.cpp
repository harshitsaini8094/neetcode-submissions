class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& s) {
       for(int i=0;i<s.size();i++){
    set<char> s1;
    set<char> s2;
    int a=0,b=0;
    for(int j=0;j<s.size();j++){
        if(s[i][j]!='.'){
            s1.insert(s[i][j]);
            a++;
            if(a!=s1.size()){
            return 0;}
        }
        if(s[j][i]!='.'){
            s2.insert(s[j][i]);
            b++;
            if(b!=s2.size()){
            return 0;}
        }
    }
}
    int b=0,c=3,d=0,e=3;
    for(int i=0;i<9;i++){
       
        if(i==3||i==6){
            b=b+3;                                                
            c=c+3;                                                
        }                                                         
         d=3*(i%3);                                               
         e=3*(i%3)+3;                                             
                           
        set<char> s1;                                              
        int a=0;                                                  
        for(int j=b;j<c;j++){                                     
            for(int k=d;k<e;k++){
                if(s[j][k]!='.'){
                    s1.insert(s[j][k]);
                    a++;
                   
                    if(s1.size()!=a){
                        
                    return 0;}
                }
            }
        }
        
        }
       
    return 1;
} 
    
};
