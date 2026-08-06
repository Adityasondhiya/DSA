class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=0;
        int maxsubsum=nums[0];
        for(int i=0;i<nums.size();i++){
            maxsum+=nums[i];
            maxsubsum=max(maxsubsum,maxsum);
            if(maxsum<0) maxsum=0;
        }
        return maxsubsum;
        
    }
};