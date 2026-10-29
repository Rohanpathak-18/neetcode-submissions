class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = -1;

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];      // Save current element
            arr[i] = maxRight;      // Replace with greatest element on right
            maxRight = max(maxRight, curr); // Update maximum
        }

        return arr;
    }
};