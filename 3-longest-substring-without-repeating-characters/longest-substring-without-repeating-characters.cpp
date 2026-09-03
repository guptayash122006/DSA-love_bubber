class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0;

        unordered_map<char, int> map;

        char* arr = &s[0];

        int right = 0;

        for (; right < s.length(); right++) {

            int idx = map.count(arr[right]) ? map[arr[right]] : -1;

            if (idx != -1 && idx >= left) {

                res = max(res, right - 1 - left + 1);

                left = idx + 1;
            }

            map[arr[right]] = right;
        }

        return max(res, right - 1 - left + 1);
    }
};