class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> masterList;
        vector<int> currentPath;

        solve(0, target, currentPath, candidates, masterList);

        return masterList;
    }

private:
    void solve(int index, int target, vector<int>& res, vector<int>& nums,
               vector<vector<int>>& ms) {

        if (target == 0) {
            ms.push_back(res);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            if (nums[i] > target)
                break;

            if (i > index && nums[i] == nums[i - 1])
                continue;

            res.push_back(nums[i]);

            solve(i + 1, target - nums[i], res, nums, ms);

            res.pop_back();
        }
    };
};
