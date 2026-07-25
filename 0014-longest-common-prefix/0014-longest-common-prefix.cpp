class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];   // take first string as base

        for (int i = 1; i < strs.size(); i++) {
            int p = 0;

            // compare prefix and current string character-by-character
            while (p < prefix.size() && p < strs[i].size() &&
                   prefix[p] == strs[i][p]) {
                p++;
            }

            // shrink prefix to matched length
            prefix = prefix.substr(0, p);

            if (prefix.empty()) return "";
        }
        return prefix;
    }
};
