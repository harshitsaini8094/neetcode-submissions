class Solution {
public:
int check(char a){
    if(a>='a'&&a<='z'||a>='A'&&a<='Z'||a>='0'&&a<='9')
    return 1;
    return 0;
}
char con(char a){
    if(a>='a'&&a<='z')
    return a;
    else if(a>='A'&&a<='Z'){
        return (a+32);
    }
    else 
    return a;
}
    bool isPalindrome(string s) {
        int a=0,b=s.length()-1;
        while(a<b){
            if(check(s[a])&&check(s[b])){
                if(con(s[a])!=con(s[b]))
                return 0;
                else{
                    a++;
                    b--;
                }
            }
            else if(!check(s[a]))
            a++;
            else if(!check(s[b]))
            b--;
        }
        return 1;
    }
};
