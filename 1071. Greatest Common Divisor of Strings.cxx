/*
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
*/


class Solution {
public:


    string gcdOfStrings(string str1, string str2) {
        if (str1+str2==str2+str1){
            return str1.substr(0,gcd(str1.size(),str2.size()));
        }
    
        return "";
    }
};
