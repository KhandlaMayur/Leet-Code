class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> st;

        int n = s.length();

        // collect substrings of length k
        for (int i = 0; i <= n - k; i++) {
            st.insert(s.substr(i, k));
        }

        // total required binary strings = 2^k
        return st.size() == (1 << k);
    }
};
