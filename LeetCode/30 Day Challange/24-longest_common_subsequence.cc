class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size() + 1);
        for(int i = 0; i < text1.size() + 1; i++)
            dp[i] = vector<int>(text2.size() + 1);
        
        for(int i = 0; i <= text1.size(); ++i) {
            for(int j = 0; j <= text2.size(); ++j) {
                if(!i || !j)
                    continue;
                
                if(text1[i - 1] == text2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[text1.size()][text2.size()];
    }
};
