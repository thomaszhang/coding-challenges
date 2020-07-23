// TODO: O(log(m+n)), some sort of binary search approach?

// Linear time O(m+n) solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int c1 = 0;
        int c2 = 0;
        while (c1 < nums1.size() && c2 < nums2.size()) {
            if (nums1[c1] < nums2[c2]) {
                v.push_back(nums1[c1]);
                c1++;
            } else {
                v.push_back(nums2[c2]);
                c2++;
            }
        }
        while (c1 < nums1.size()) {
            v.push_back(nums1[c1]);
            c1++;
        }
        while (c2 < nums2.size()) {
            v.push_back(nums2[c2]);
            c2++;
        }
        int mid = v.size()/2;
        // One median
        if (v.size()%2 == 1)
            return (double) v[mid];
        // Two medians
        return (double) (v[mid-1] + v[mid]) /2;
    }
};