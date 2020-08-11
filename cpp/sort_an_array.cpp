class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
    
    vector<int> merge(vector<int>& a, vector<int>& b) {        
        vector<int> result;
        int i = 0; int j = 0; // Index of subarrays
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                result.push_back(a[i]);
                i++;
            } else {
                result.push_back(b[j]);
                j++;
            }
        }
        // Fill with rest of A
        while (i < a.size()) {
            result.push_back(a[i]);
            i++;
        }
        // Fill with rest of B
        while (j < b.size()) {
            result.push_back(b[j]);
            j++;
        }
        return result;
    }
    
    vector<int> mergeSort(vector<int>& nums, int start, int end) {
        // Base case
        if (end - start <= 0) {
            return { nums[start] };
        }
        // Recursive
        int mid = (start + end) / 2;
        vector<int> a = mergeSort(nums, start, mid);
        vector<int> b = mergeSort(nums, mid+1, end);
        
        return merge(a,b);
    }

};