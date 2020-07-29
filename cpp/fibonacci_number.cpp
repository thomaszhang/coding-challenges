// O(N)
class Solution {
public:
    int fib(int N) {
        vector<int> v = {0,1};
        for (int i = 1; i < N; i++) {
            v.push_back(v[i] + v[i-1]);
        }
        return v[N];
    }
};