class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        for(int i=0;i<temp.size()-1;i++){
            int ans=0;
            int g=temp[0];
            for(int j=i+1;j<temp.size();j++){
                //cout<<temp[i]<<" "<<temp[j];
                if( temp[j]>temp[i]){
                    ans=j-i;
                    cout<<" "<<ans<<endl;
                    break;
                }
                //cout<<" "<<ans<<endl;
            }
            temp[i]=ans;
            }
            temp[temp.size()-1]=0;
            return temp;
        }
       
    };

