class Solution {
public:
    // O(N)
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // Sort array first
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        int min = INT_MAX;
        // Iterate all pairs
        for (int i = 0; i < arr.size()-1; i++) {
            if (arr[i+1]-arr[i] <= min) {
                // Clear
                if (arr[i+1]-arr[i] < min) {
                    v.clear();
                    min = arr[i+1]-arr[i];
                }
                // Push
                v.push_back({arr[i],arr[i+1]});
            }
        }
        // bubble_sort(v);
        return v;
    }

};

/*
    // O(N^2)
    void bubble_sort(vector<vector<int>>& v) {
        for (int i = 0; i < v.size()-1; i++) {
            for (int j = i+1; j < v.size(); j++) {
                if (v[j][0] < v[i][0])
                    swap(v[j], v[i]);
            }
        }
    }
*/