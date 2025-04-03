class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0); // For 'a' to 'z'

        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Step 2: Find the first unique character
        for (int i = 0; i < s.length(); ++i) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; // No unique character
    }
};
