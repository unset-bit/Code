//Longest common prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        char curr;
        for(int i=0; i<200; i++)
        {
            curr = strs[0][i];
            for(auto str : strs)
            {
                if(str.length() <= i || str[i]!=curr)
                    return ans;
            }
            ans += curr;
        }
        return ans;
    }
};