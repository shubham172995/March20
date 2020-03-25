class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==0)
            return res;
        res=strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i].size()==0){
                res="";
                break;
            }
            for(int j=0;j<strs[i].length();j++){
                if(j>=res.length()){
                    break;
                }
                if(strs[i][j]==res[j]&&(j!=strs[i].length()-1))
                    continue;
                else if(strs[i][j]==res[j]&&(j==strs[i].length()-1))
                    res=strs[i];
                else res=res.substr(0, j);
            }
        }
        return res;
    }
};