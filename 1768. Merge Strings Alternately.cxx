/*
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
  */



class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int count_word1 = word1.length(); //4
        int count_word2 = word2.length(); //2
        string merged ="";
        int i=0;
        int j=0;
        if (count_word1 != 0){
        while ( i < count_word1 || j < count_word2) {
            if ( i < count_word1 ){
                merged.push_back(word1[i]);
            }
            if (j < count_word2){
                cout << j ;
                merged.push_back(word2[j]);
            }
            i++;
            j++; 
        }
        }
        return merged;
    }
};
