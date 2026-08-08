class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        // checkafterwards[i] = how many characters of word2
        // can be matched using word1[i...n-1]
        vector<int> checkafterwards(n + 1, 0);

        int j = m - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (j >= 0 && word1[i] == word2[j]) {
                j--;
            }

            checkafterwards[i] = m - 1 - j;
        }

        vector<int> ans;

        int i = 0;
        j = 0;
        bool havepow = true;

        while (i < n && j < m) {

            // Use the one allowed mismatch here
            if (havepow &&
                (word1[i] != word2[j]) &&
                checkafterwards[i + 1] >= m - j - 1) {

                ans.push_back(i);
                havepow = false;
                i++;
                j++;
            }

            // Normal matching character
            else if (word1[i] == word2[j]) {
                ans.push_back(i);
                i++;
                j++;
            }

            else {
                i++;
            }
        }

        if (j == m)
            return ans;

        return {};
    }
};