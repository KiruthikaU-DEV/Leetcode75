/*
Input: s = "the sky is blue"
Output: "blue is sky the"
  */

class Solution {
public:
    string reverseWords(string s) {
        	stack<string> stringstack;
	string word;
	stringstream ss(s);

	while (ss >> word) {
		stringstack.push(word);
	}

	string result;
	while (!stringstack.empty()) {
		result += stringstack.top();
		stringstack.pop();
		if (!stringstack.empty()) {
			result += " ";
		}
	}
	return result;
    }
};
