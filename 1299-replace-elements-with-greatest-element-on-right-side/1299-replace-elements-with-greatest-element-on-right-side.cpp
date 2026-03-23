class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current_val = arr[i];

            arr[i] = max;

            if (current_val > max) {
                max = current_val;
            }
        }

        return arr;
    }
};
