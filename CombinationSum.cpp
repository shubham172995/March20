class Solution {
public:
    void solve(vector<int> &a, int target, vector<vector<int>> & res, vector<int>& temp, int i){
        if(target==0){
            vector<int> t=temp;
            //sort(t.begin(), t.end());
            res.push_back(t);
            return;
        }
        else for(int j=i;j<a.size();j++){
            if(target<a[j])
                continue;
            temp.push_back(a[j]);
            solve(a, target-a[j], res, temp, j);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int> > res;
        solve(candidates, target, res, temp, 0);
        sort(res.begin(), res.end());
        if(res.size()==0)
            return res;
        temp=res[0];
        sort(temp.begin(), temp.end());
        for(int i=1;i<res.size();){
            vector<int> t=res[i];
            sort(t.begin(), t.end());
            if(t==temp)
                res.erase(res.begin()+i);
            else{
                temp=t;
                ++i;
            }
        }
        return res;
    }
};