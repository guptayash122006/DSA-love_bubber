class Solution {
    public int lengthOfLongestSubstring(String s) {
        // Stores the last seen index of each character
        HashMap<Character, Integer> map = new HashMap<>();

        int left = 0;   // start of window
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            char ch = s.charAt(right);

            // If character is already in window, move the left pointer
            if (map.containsKey(ch) && map.get(ch) >= left) {
                left = map.get(ch) + 1;
            }

            // Update the last seen index
            map.put(ch, right);

            // Calculate window size
            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }
}