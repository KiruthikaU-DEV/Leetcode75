/*
Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".
  */


class Solution {
public:

    bool is_vowel(char c) {
        switch (c) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;

        }
    }
    string reverseVowels(string s) {
        string vowstring ="";
        string newstring ="";
        for (int i = 0; i < s.size(); ++i) {
            if (is_vowel(s[i]))
                vowstring += s[i];
        }
        reverse(vowstring.begin(), vowstring.end());
        int j = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (!is_vowel(s[i]))
                newstring += s[i];
            if (is_vowel(s[i])) {
                
                newstring += vowstring[j];
                j++;
            }
        }
        return newstring;
    }
};
