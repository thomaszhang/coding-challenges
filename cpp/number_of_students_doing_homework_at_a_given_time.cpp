// O(N) runtime, array walk
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int activeStudents = 0;
        for (int i = 0; i < startTime.size(); i++) {
            if (queryTime >= startTime[i] && queryTime <= endTime[i])
                activeStudents += 1;
        }
        return activeStudents;
    }
};