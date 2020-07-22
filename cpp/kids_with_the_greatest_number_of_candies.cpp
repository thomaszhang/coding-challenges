class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find max
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max)
                max = candies[i];
        }
        vector<bool> v;
        // Current candies + extra >= max
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};
