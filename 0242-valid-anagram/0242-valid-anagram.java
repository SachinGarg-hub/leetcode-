class Solution {
    public boolean isAnagram(String str1, String str2) {

        if (str1.length() != str2.length()) {
            return false;
        }

        int[] count = new int[26];

        for (int i = 0; i < str1.length(); i++) {
            int idx = str1.charAt(i) - 'a';
            count[idx]++;
        }

        for (int i = 0; i < str2.length(); i++) {
            int idx = str2.charAt(i) - 'a';
            if (count[idx] == 0) {
                return false;
            }
            count[idx]--;
        }

        return true;
    }
}
