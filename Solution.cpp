class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for (int& sw : sandwiches) {
            vector<int> copy = students;
            int pos = 0;
            for (int i = 0; i < copy.size(); i++) {
                if (copy[i] == sw) {
                    pos = i + 1;
                    break;
                }
            }
            if (pos == 0) {
                break;
            }
            students.erase(students.begin(), students.begin() + pos);
            for (int i = 0; i < pos - 1; i++) {
                students.push_back(copy[i]);
            }
        }
        return students.size();
    }
};
