class Solution {
public:
    int maxPower(string s) {
        int left=0;
        int size=1;
        for(int right=1;right<s.size();right++){
            if(s[left]==s[right]) size=max(size,right-left+1);
            else left=right;
        }
        return size;
        
    }
};