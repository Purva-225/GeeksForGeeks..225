class Solution {
  public:
    int closestToZero(int arr[], int n) {
       sort(arr, arr + n);

        int first = 0, second = n - 1;
        int closestSum = INT_MAX;

        while (first < second) {
            int sum = arr[first] + arr[second];

            if (abs(sum) < abs(closestSum)) {
                closestSum = sum;
            }
            else if (abs(sum) == abs(closestSum)) {
                closestSum = max(closestSum, sum);
            }

            if (sum < 0)
                first++;
            else
                second--;
        }

        return closestSum;
    }
};
