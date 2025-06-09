#include <iostream>
#include <vector>

using namespace std;

int findKthNumber(int n, int k) {

    int res = 1;
    long long cur = 1;

        for(int i=0;i < k;i++) {
        res = cur;


        if (cur * 10 <= n) {
            cur *= 10;
        }
        else {
            while (cur == n || cur % 10 == 9) {
                cur /= 10;
            }
            cur++;
        }

    }
    return res;
}



int main()
{

    cout << findKthNumber(681692778, 351251360);
}
