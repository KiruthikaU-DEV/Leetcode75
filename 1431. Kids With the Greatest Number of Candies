
/*
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
E
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    vector<int> new_candies = {};
	vector<bool> result = {};
	for (int i : candies) {
		new_candies.push_back(i + extraCandies);
	}
    int max = *max_element(candies.begin(), candies.end());
    cout << max;
	for (int i : new_candies)
		if (i >= max){
		    cout<<"true";
			result.push_back(true);
		}
		else{
		    cout<<"false";
			result.push_back(false);
		}
	return result;
    }
};
