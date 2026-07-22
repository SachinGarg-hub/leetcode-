class Solution {
public:
    string removeOccurrences(string s, string part) {
        int start = s.find(part);

        while (start != string::npos) {
            s.erase(start, part.length());
            start = s.find(part);
        }

        return s;
    }
};