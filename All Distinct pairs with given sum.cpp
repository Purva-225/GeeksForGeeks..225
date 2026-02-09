class Solution {
  public:
    vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
       int n = arr.size();
        vector<vector<int>> ans;
       sort(arr.begin(), arr.end());

       int left = 0, right = n - 1;

       while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            ans.push_back({arr[left], arr[right]});

            int x = arr[left];
            int y = arr[right];

            while (left < right && arr[left] == x) left++;
            while (left < right && arr[right] == y) right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
      }

    return ans;
    }
};
