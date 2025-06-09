#include <iostream>
#include <vector>

using namespace std;

int count(long long cur, int n) {
    unsigned res = 0;
    unsigned neigh = cur + 1;

    while (cur <= n) {
        neigh = (neigh < n + 1) ? neigh : n + 1;
        res += neigh - cur;
        cur *= 10;
        neigh *= 10;
    }
    return res;
}


// Solution i learned from youtube
// O( (logN)^2 )
int findKthNumber(int n, int k) {
    int i = 1;
    long long cur = 1;

    while (i < k) {
        int steps = count(cur,n);
        if (i + steps <= k) {
            cur++;
            i += steps;
        }
        else {
            cur *= 10;
            i++;
        }
    }
    return cur;

}




// My solution O(N) but TLE

//int findKthNumber(int n, int k) {
//
//    int res = 1;
//    long long cur = 1;
//
//        for(int i=0;i < k;i++) {
//        res = cur;
//
//
//        if (cur * 10 <= n) {
//            cur *= 10;
//        }
//        else {
//            while (cur == n || cur % 10 == 9) {
//                cur /= 10;
//            }
//            cur++;
//        }
//
//    }
//    return res;
//}



int main()
{

    cout << findKthNumber(957747794, 424238336);
}
