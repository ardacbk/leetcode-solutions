#include <iostream>
#include <vector>

using namespace std;

vector<int> lexicalOrder(int n) {
    vector<int> order;
    int current = 1;

    while (order.size() < n) {
        order.push_back(current);

        if (current * 10 <= n) {
            current *= 10;
        }
        else {
            while (current == n || current % 10 == 9) {
                current /= 10;
            }
            current++;
        }
      }

    return order;

}


int main()
{
    vector<int> order = lexicalOrder(2504);
   
    for (int i : order) {
        cout << i << ' ';
    }
}
