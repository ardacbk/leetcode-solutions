#include <iostream>
#include <vector>

using namespace std;



class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());

        prefixSum[0] = nums[0];

        for (int i = 0; i < nums.size() - 1; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i + 1];
        }

    }

    int sumRange(int left, int right) {

        if (left == 0)
            return prefixSum[right];

        return prefixSum[right] - prefixSum[left - 1];

    }
};


int main()
{
    vector<int> nums = { -2, 0, 3, -5, 2, -1 };
    
    NumArray* obj = new NumArray(nums);

    std::cout << "Prefix Sum Array: ";
    for (int i : obj->prefixSum) {
        std::cout << i << " ";
    }

    std::cout << "\nSum Range: " << obj->sumRange(2, 5);

}
