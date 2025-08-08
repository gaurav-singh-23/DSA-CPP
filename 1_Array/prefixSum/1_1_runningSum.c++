#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            result[i] += nums[j]; // Sum from 0 to i
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
