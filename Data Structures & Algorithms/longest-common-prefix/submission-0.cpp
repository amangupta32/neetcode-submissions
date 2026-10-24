class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";

        string s, s1, s2 = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            s = s2;
            s1 = strs[i];
            s2 = "";

            for (int j = 0; j < s.size() && j < s1.size(); j++) {
                if (s[j] == s1[j]) {
                    s2 += s[j];
                }
                else {
                    break;
                }
            }
        }

        return s2;
    }
};