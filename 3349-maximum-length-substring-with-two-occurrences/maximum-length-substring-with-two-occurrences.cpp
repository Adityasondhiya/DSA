class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0;
        
        int maxi=1;
        unordered_map<int,int> mp;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            while(mp[s[right]]>2) mp[s[left++]]--;
            maxi=max(maxi,right-left+1);
            cout<<maxi<<" ";
        }
        return maxi;
        // b=3
        // c=1
        
    }
};