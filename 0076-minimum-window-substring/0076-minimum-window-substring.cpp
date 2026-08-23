class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0);

        for(char ch : t) {
            freq[ch]++;
        }

        int left = 0;
        int required = t.size();
        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {
            char ch = s[right];

            if(freq[ch] > 0) {
                required--;
            }

            freq[ch]--;

            while(required == 0) {
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];

                freq[leftChar]++;

                if(freq[leftChar] > 0) {
                    required++;
                }

                left++;
            }
        }

        if(minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};