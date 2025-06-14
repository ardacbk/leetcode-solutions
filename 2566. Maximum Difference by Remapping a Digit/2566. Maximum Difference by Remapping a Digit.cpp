#include <iostream>
#include <string>
#include <vector>
using namespace std;


int minMaxDifference(int num) {
    string maxStr = to_string(num);
    string minStr = to_string(num);

    char minChar = 0, maxChar = 0;

    for (int i = 0; i < maxStr.size(); i++) {
        if (maxChar == 0 && maxStr[i] != '9') {
            maxChar = maxStr[i];
            maxStr[i] = '9';
        }
        else if (maxChar == maxStr[i])
            maxStr[i] = '9';

    }

	for (int i = 0; i < minStr.size(); i++) {
		if (minChar == 0 && minStr[i] != '0') {
			minChar = minStr[i];
			minStr[i] = '0';
		}
		else if (minChar == minStr[i])
			minStr[i] = '0';
	}


    return stoi(maxStr) - stoi(minStr);

}

int main()
{
    cout << minMaxDifference(11891);
}

