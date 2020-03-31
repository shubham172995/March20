class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long int min=INT_MAX;
        long int ans=INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int j, k;
            j=0;k=nums.size()-1;
            int t=target-nums[i];
            int temp=INT_MAX;
            while(j<k){
                if(j==i)
                    ++j;
                if(k==i)
                    --k;
                if(k<=j)
                    break;
                int sum=nums[j]+nums[k];
                if(temp>(abs(sum-t))){
                    temp=abs(sum-t);
                    min=nums[i]+nums[j]+nums[k];
                }
                //cout<<i<<" "<<j<<" "<<k<<" "<<temp<<" "<<min<<endl;
                if(abs(nums[j]+nums[k-1]-t)<abs(nums[k]+nums[j+1]-t))
                    --k;
                else ++j;
            }
            ans=abs(ans-target)>abs(min-target)?min:ans;
            //cout<<ans<<" "<<min<<endl;
        }
        return ans;
    }
};