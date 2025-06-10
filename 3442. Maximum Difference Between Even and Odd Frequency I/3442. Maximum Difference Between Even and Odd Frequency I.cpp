
#include <iostream>


using namespace std;

int maxDifference(string s) {
    int freq['z' - 'a' + 1] = { 0 };
    int minEven = INT_MAX;
    int maxOdd = 0;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < ('z' - 'a' + 1); i++) {
        if (freq[i] % 2 == 0 && freq[i]!=0)
            minEven = min(freq[i], minEven);
        else
            maxOdd = max(freq[i], maxOdd);
    }

    return maxOdd - minEven;

}



int main()
{
	cout << maxDifference("puedscfnqbxswknqxcprvwfwluqyyhjqgksgsedgmqkonwdskirfjqwrzxpbcdmvnwoedfqesdsonsmtfllrujqsxqquerzkvnvv");
}

