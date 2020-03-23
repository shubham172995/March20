class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> m;int j=0;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            if(m.find(temp)!=m.end()){
                continue;
            }
            else{
                m.insert(make_pair(temp, j));
                ++j;
            }
        }
        vector<vector<string> > res(j);
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            res[m[temp]].push_back(strs[i]);
        }
        return res;
    }
};