class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reserved) {

        unordered_map<int, set<int>> mp;

        for (auto r : reserved) {
            mp[r[0]].insert(r[1]);
        }

        int answer = 2 * n;

        for (auto &[row, seats] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

            for (int i = 2; i <= 5; i++) {
                if (seats.count(i)) {
                    left = false;
                    break;
                }
            }

            for (int i = 4; i <= 7; i++) {
                if (seats.count(i)) {
                    middle = false;
                    break;
                }
            }

            for (int i = 6; i <= 9; i++) {
                if (seats.count(i)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
            }
            
            else if (left || middle || right) {
                answer--;
            }
            else {
                answer -= 2;
            }
        }

        return answer;
    }
};