class Solution {
public:
    int sti(string s){
    int ans=0,q=0;
    int f=0;
    if(s[0]=='-'){
        f=1;
        q=1;
    }
    for(int i=q;i<s.length();i++){
        int n=s[i]-'0';
        ans=ans*10+n;                                                         //["10","6","9","3","+","-11","*","/","*","17","+","5","+"]13
    }
    if(f==1){
        ans=-ans;
    }
    return ans;
}
    string its(int a){
    string ans;
    int f=0;
    if(a<0){
        f=1;
        a=-a;
    }
    while(a>0){
        int f=a%10;
        char f1=f+'0';
        ans=f1+ans;
        a=a/10;
    }
    if(f==1){
        ans='-'+ans;
    }

    return ans;
}
    int evalRPN(vector<string>& s) {
         vector<string> c;
    for(int i=0;i<s.size();i++){
        if(!(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/")){
            c.push_back(s[i]);
        }
        else{
            int a2=sti(c[c.size()-1]);
            int a1=sti(c[c.size()-2]);
            c.erase(c.begin()+c.size()-1);
            c.erase(c.begin()+c.size()-1);
            if(s[i]=="+"){
                int a3=a1+a2;
                c.push_back(its(a3));
            }
            else if(s[i]=="-"){
                int a3=a1-a2;
                c.push_back(its(a3));
            }
            else if(s[i]=="*"){
                int a3=a1*a2;
                c.push_back(its(a3));
            }
            else{
                int a3=a1/a2;
                c.push_back(its(a3));
            }
        }
    }
    return sti(c[0]);
    }
};
