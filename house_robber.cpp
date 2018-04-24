class Solution {
public:
    int rob(vector<int> nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        
        vector<int> sum(n,0);
        sum[0]=nums[0];
        sum[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++)
        {
            sum[i]=max(sum[i-2]+nums[i],sum[i-1]);
        }
        
        return sum[n-1];
    }
};
