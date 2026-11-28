
class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.length();

        vector<int> freq(26, 0);

        int l = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for (int r = 0; r < n; r++) {

            freq[s[r] - 'A']++;

            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            int windowSize = r - l + 1;

            if (windowSize - maxFreq > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};
