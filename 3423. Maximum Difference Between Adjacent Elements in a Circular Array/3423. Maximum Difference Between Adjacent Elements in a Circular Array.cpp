#include <iostream>

#include <vector>
using namespace std;

int maxAdjacentDistance(vector<int>& nums) {
    int maxDiff = 0;
    for (int i = 1; i < nums.size(); i++) {
        maxDiff = max(maxDiff, abs(nums[i - 1] - nums[i]));
    }
    // edge case 
    // check the diff of first and last element
    maxDiff = max(maxDiff, abs(nums[0] - nums[nums.size() - 1]));

    return maxDiff;
}

int main()
{
    vector<int> nums = { -1, 2, -3, 4, -5, 6 };
    std::cout << maxAdjacentDistance(nums);
}
