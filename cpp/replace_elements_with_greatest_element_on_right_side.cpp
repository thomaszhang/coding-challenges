// O(N) runtime
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = arr[arr.size()-1];
        // Replace i = [0, arr.size()-1]
        for (int i = arr.size()-1; i >= 0; i--) {
            if (arr[i] > max) {
                // New max
                swap(max, arr[i]);
            } else {
                // Carry
                arr[i] = max;
            }
        }
        // Replace last element
        arr[arr.size()-1] = -1;
        return arr;
    }
};