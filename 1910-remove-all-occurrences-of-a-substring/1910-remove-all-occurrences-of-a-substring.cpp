class Solution {
public:
    string removeOccurrences(string s, string part) {
        int start = s.find(part);

        while (s.length()>0 && start<s.length()) {
            s.erase(start, part.length());
            start = s.find(part);
        }

        return s;
    }
};