class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> v;
        // Create p
        vector<int> p;
        for (int i = 0; i < m; i++) {
            p.push_back(i+1);
        }
        for (int i = 0; i < queries.size(); i++) {
            // Look for queries[i] in p
            for (int j = 0; j < m; j++) {
                if (queries[i] == p[j]) {
                    // Found - move to front and add index j+1
                    p.erase(p.begin() + j);
                    p.insert(p.begin(), queries[i]);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};