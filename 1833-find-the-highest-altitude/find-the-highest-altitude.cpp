class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();

        vector<int> ans(n+1);
        ans[0]=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            ans[i+1] = ans[i]+gain[i];
            maxi=max(maxi,ans[i+1]);
            if(maxi<0) maxi=0;
        }
        return maxi;
        
    }
};