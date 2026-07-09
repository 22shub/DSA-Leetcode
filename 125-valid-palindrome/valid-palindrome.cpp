class Solution {
public:
    bool check(string &s, int i, int j) {
        if (i >= j) return true;
        if (s[i] != s[j]) return false;
        return check(s, i + 1, j - 1);
    }

    bool isPalindrome(string s) {
        string t;

        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c))
                t += tolower(c);
        }

        return check(t, 0, t.size() - 1);
    }
};