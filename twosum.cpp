class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> a;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(a.find(temp)!=a.end()){
                ans.push_back(a[temp]);
                ans.push_back(i);
            }
            a.insert(make_pair(nums[i], i));
        }
        return ans;
    }
};