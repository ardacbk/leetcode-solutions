#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int findMaxLength(vector<int>& nums) {

    unordered_map<int, int> prefix;
    int prefSum = 0;
    int longest = 0;


    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0)
            prefSum--;
        else
            prefSum++;
        std::cout << prefSum << " ";

        if (prefSum == 0)
            longest = i + 1;
        else if (prefix.find(prefSum) != prefix.end())
            longest = max(longest, i - prefix[prefSum]);

        if (prefix.find(prefSum) == prefix.end()) {
            prefix[prefSum] = i;
        }
    }
    
    return longest;
}



int main()
{

    vector<int> nums = { 1,0 };

    std::cout << '\n' << findMaxLength(nums);
}
