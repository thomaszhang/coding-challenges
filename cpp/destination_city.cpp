// O(N) performance - no collisions and up to double walk through 
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> link;
        // Add links to hash map
        for (int i = 0; i < paths.size(); i++) {
            link[paths[i][0]] = paths[i][1];
        }
        // Walk from arbitary city until end
        string curr = paths[0][0];
        while (link.find(curr) != link.end()) {
            curr = link[curr];
        }
        return curr;
    }
};