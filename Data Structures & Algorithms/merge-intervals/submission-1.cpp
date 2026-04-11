class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int> current;
        current=intervals[0];
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i = 1; i < n; i++){
            if(intervals[i][0] <= current.back()){
                current[0] = min(intervals[i][0], current[0]);
                current[1] = max(current[1], intervals[i][1]);
            }
            else{
                ans.push_back(current);
                current = intervals[i];
            }
        }
        ans.push_back(current);
        return ans;
    }
};
