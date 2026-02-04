class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
          int n = arr.size();
          int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    if (totalSum % 3 != 0) {
        return {-1, -1};
    }
    int target = totalSum / 3;
    int currentSum = 0;
    int firstIndex = -1;
    for (int i = 0; i < n - 1; i++) {
        currentSum += arr[i];

        if (currentSum == target && firstIndex == -1) {
            firstIndex = i;
        }
        else if (currentSum == 2 * target && firstIndex != -1) {
            return {firstIndex, i};
        }
    }

    return {-1, -1};
    }
};
